#include<iostream>
#include"Student.h"
using namespace std;


Student::Student(int id,string name,string course)
{
		this->id=id;
		this->name=name;
		this->course=course;
		

}
Student::Student(){
	c++;
};
void Student::display()
{
	cout<<this->id<<" "<<this->name<<" "<<this->course<<" "<<this->c<<endl;
	
}