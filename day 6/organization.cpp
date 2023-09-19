#include<iostream>
using namespace std;
#include<string>


class Emp
{
	protected:
		int id,deptId;
		double basicSal;
		string name;
	public:
	Emp()
	{
			
		
	}
	Emp(int id,int deptId,string name,double basicSal)
	{
		this->id=id;
		this->name=name;
		this->basicSal=basicSal;
		
	}
	virtual double netSal()
	{
		return 0;
	}
};
class Mgr:public Emp{
	protected:
		double perfBonus;
	public:
	Mgr()
	{
	}
	Mgr(int id,int deptId,string name,double basicSal,double perfBonus):Emp(id,deptId,name,basicSal)
	{
		this->perfBonus=perfBonus;
		
		}	
	double netSal()
	{
		cout<<"salary is:"<< basicSal+perfBonus<<endl;
					return 0;

		
	}
};
class Worker:public Emp{
	protected:
		double hoursWorked,hourlyRate;
		
		
	public:
		Worker(){
		}
		Worker(int id,int deptId,string name,double basicSal,double hoursWorked,double hourlyRate):Emp(id,deptId,name,basicSal)
		{
			this->hourlyRate=hourlyRate;
			this->hoursWorked=hoursWorked;
				
		}
		double netSal()
		{
			cout<<"salary is:"<< hoursWorked*hourlyRate<<endl;
			return 0;
		}
		double gethrlyRate()
		{
			return this->hourlyRate;
		}
};
int main()
{
//Emp(int id,int deptId,string name,basicSal)
//Mgr(int id,int deptId,string name,basicSal,double perfBonus):Emp(id,deptId,name,basicSal)
//Worker(int id,int deptId,string name,double basicSal,double hoursWorked,double hourlyRate):Emp(id,deptId,name,basicSal)

	Emp e1;
	Mgr m1(1,101,"satyem",500,100);
	Worker w1(2,102,"abc",100,2,10);
	m1.netSal();
	w1.netSal();
	cout<<"hrlyrate:"<<w1.gethrlyRate()<<endl;
	Mgr *mArray=nullptr;
	int ch,n;
	
	
	do{
		cout<<"1: hire manager 2:hire worker 3:display all emp salary 4: Exit"<<endl;
		cout<<"enter choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				int id,dep;
				string name;
				double sal,perf;
				cout<<"enter no. of manager"<<endl;
				cin>>n;
					Mgr *mArray=new Mgr[n];

				for(int i=0;i<n;i++)
				{
				cout<<"enter id, dept id,name,salary,perfBonus"<<endl;
				cin>>id>>dep>>name>>sal>>perf;
				mArray[i]=Mgr(id,dep,name,sal,perf);
			}
				break;
			case 2:
				break;
			case 3:
				Mgr *marr=new Mgr[n];
				for(int i=0;i<n;i++)
				{
					marr[i].netSal();
				}
				break;
		
		}
		
	}while(ch!=4);
	
	
}