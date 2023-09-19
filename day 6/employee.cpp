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
	Employee(int id,int deptId,string name, double basicSalary)
	{
		this->id=id;
		this->deptId=deptId;
		this->name=name;
		this->basicSalary=basicSalary;
	};
	virtual double NetSalary()
	{
		return 0;
	}
	void netSal(int basicSalary);
	void display()
	{
		cout<<id<<" "<<deptId<<" "<<name<<" "<<basicSalary<<" ";
	};
	
};

class Mgr:public Employee
{
	protected:
		
	double perfBonus;
	
	public:
	Mgr();
	Mgr(int id,int deptId,string name,double basicSalary, double perfBonus):Employee(id,deptId,name,basicSalary)
	{
		this->perfBonus=perfBonus;
	}
	void display()
	{
		cout<<endl;
		Employee::display();	
			cout<<" "<<perfBonus<<" net:"<<NetSalary()<<endl;

	}
	double NetSalary()
	{
		double net=this->basicSalary+this->perfBonus;
		return net;
	}
};

class Worker:public Employee
{
	protected:
		
			double houseWorked, hourlyRate;
	public:
		Worker();
		Worker(int id,int deptId,string name,double basicSalary, double perfBonus, double houseWorked, double hourlyRate):Employee(id,deptId,name,basicSalary)
		{
				this->hourlyRate=hourlyRate;
				this->houseWorked=houseWorked;
		}
		void display()
		{
			cout<<endl;
			Employee::display();
			cout<<" "<<this->hourlyRate<<" "<<this->houseWorked<<" net:"<<NetSalary()<<endl;
			
		}
		double getHrlyRate()
		{
			return hourlyRate;
		}
		double NetSalary()
		{
			return this->basicSalary+(hourlyRate*houseWorked);
//			return net;
		}
			
			
};
int main()
{
	Employee e(1, 101,"satyam",50000);
	e.display();
	Mgr m(2,102,"pratik",55000,500);
	m.display();
	Worker w(3,103,"himanshu",60000,600,100,1000);
	w.display();
	cout<<"hourly "<<w.getHrlyRate()<<endl;
	
	
	
}
