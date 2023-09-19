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
		int roll,age;
		string name;
	public:
		Student();
		Student(int roll,int age,string name)
		{

			try{
				if(age<18)
				{
					throw Exception("age is below 18");
				}
					this->age=age;
				if(roll==0)
				{
					throw Exception("roll number cannot be 0");
				}
					this->roll=roll;


			}
			catch(Exception &a)
			{
				a.disp();
			}

			this->name=name;
			
		}
		void display()
		{
			cout<<roll<<" "<<age<<" "<<name<<endl;
		}
};
int main()
{

	
	Student s(2,25,"satyam");
		s.display();
		
	Student s1(0,25,"tushar");
	Student s2(5,15,"abc");

	return 0;
}