#include<iostream>
#include"emp.h"
using namespace std;
int main()
{
	//	Employee(int id,int deptId,string name, double basicSalary);

	Employee e1(1,002,"satyam",50000);
	e1.display();
//	Mgr(ind id,int deptId,string name,double basicSalary,double perfBonus)
	Mgr m(1,103,"pratik",60000,500);
	m.display();
	
//	cout<<"main function called"<<endl;
}