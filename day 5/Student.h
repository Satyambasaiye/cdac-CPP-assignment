#include<iostream>
using namespace std;
class Student
{
	private: 
	string name,course;
	static int c;
	int id;
	public:
	
	Student();
	Student(int id,string name,string course);

	void display();
};
