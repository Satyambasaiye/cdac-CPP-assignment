#include<iostream>
using namespace std;
class Employee
{
	protected:
		int id,deptId;
		double basicSalary;
		string name;
	public:
	Employee();
	Employee(int id,int deptId,string name, double basicSalary);
	void netSal(int basicSalary);
	void display();
	
};

class Mgr:public Employee
{
	protected:
		
	double perfBonus;
	public:
	Mgr();
	Mgr(int id,int deptId,string name,double basicSalary, double perfBonus);
	void display();
};
class Worker:public Employee
{
	protected:
		
			double houseWorked, hourlyRate;
	public:
		Worker();
		Worker(int id,int deptId,string name,double basicSalary, double perfBonus, double houseWorked, double hourlyRate);
			
			
};
