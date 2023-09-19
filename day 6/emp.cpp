#include<iostream>
#include "emp.h"
using namespace std;

Employee::Employee(int id,int deptId,string name, double basicSalary)
{
	this->id=id;
	this->deptId=deptId;
	this->name=name;
	this->basicSalary=basicSalary;
}

Mgr::Mgr(int id,int deptId,string name,double basicSalary,double perfBonus) :Employee( id, deptId, name,  basicSalary)

{
//	this->id=id;
//	this->deptId=deptId;
//	this->name=name;


	this->perfBonus=perfBonus;
	
}

//Worker::Worker(int id,int deptId,string name,double basicSalary,double perfBonus,double houseWorked,double hourlyRate)
//{
//	this->id=id;
//	this->deptId=deptId;
//	this->name=name;
//	this->basicSalary=basicSalary;
//	this->perfBonus=perfBonus;
//	this->houseWorked=houseWorked;
//	this->hourlyRate=hourlyRate;
//	
//}
void Employee::display()
{
	cout<<this->id<<" "<<this->deptId<<" "<<this->name<<" "<<basicSalary<<endl;
	}


