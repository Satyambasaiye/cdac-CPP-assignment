#include<iostream>
using namespace std;
class Exception
{
	protected:
		string msg;
	public:
		Exception();
		Exception(string msg)
		{
			this->msg=msg;
		}
		void disp()
		{
				cout<<"Error: "<<msg<<endl;

		}
};
class Student
{
	protected:
		int roll=0,age=0;
		string name;
	public:
		Student();
		Student(int roll,int age,string name)
		{

			try{
				if(age<18)
				{
					throw Exception(to_string(age)+" age is below 18");
				}
					this->age=age;
				if(roll==0)
				{
					throw Exception("roll number cannot be 0");
				}
					this->roll=roll;


			}
			catch(Exception a)
			{
				a.disp();
			}

			this->name=name;
			
		}
		void display()
		{
			if(roll==0||age<18)
			cout<<"insufficient data"<<endl;
			else
			cout<<roll<<" "<<age<<" "<<name<<endl;
		}
};
int main()
{

	
	Student s(2,25,"satyam");
		s.display();
		
	Student s1(0,25,"tushar");
	s1.display();
	Student s2(5,15,"abc");
	s2.display();

	return 0;
}