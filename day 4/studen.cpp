#include<iostream>
using namespace std;
class student
{
	private:
		int rollNo,marks1,marks2,marks3,p;
	public:
		student(int rollNo,int marks1,int marks2,int marks3)
		{
			this->rollNo=rollNo;
			this->marks1=marks1;
			this->marks2=marks2;
			this->marks3=marks3;
		}
		int getRollNo()
		{
			return rollNo;
		}
		void setRollNo(int rollNo)
		{
			this->rollNo=rollNo;
		}
		void display()
		{
			cout<<"roll No: "<<rollNo<<endl;
			cout<<"subject 1:"<<marks1<<endl;
			cout<<"subject 2:"<<marks2<<endl;
			cout<<"subject 3:"<<marks3<<endl;
			cout<<"total marks:"<<marks1+marks2+marks3<<endl;
			p=(marks1+marks2+marks3)*0.3;
			cout<<"percentage :"<<p<<endl;
        grade(p); // Corrected this line
		}
		
			void grade(int per)
		{
			if(per>=90)
			{
				cout<<"grade: A"<<endl;
			}
			else if(per>=80 &&per<90)
			{
				cout<<"grade: B";
			}
			else if(per>=70 && per<80)
			{
				cout<<"grade: C"<<endl;
			}
			else
			cout<<"grade: D"<<endl;
		}
		};
	
int main()
{
		student s1(123,25,52,67);
		s1.display();
		cout<<"get Roll: "<<s1.getRollNo()<<endl;
		s1.setRollNo(100);
		s1.display();
		
}
