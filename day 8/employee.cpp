#include<iostream>
#include<fstream>
using namespace std;

class Employee{
	protected:
		int empNo;
		double sal;
		string name;
		
	public:
	Employee(){
		cout<<"from emp constructor";
		fromfile();
	}
	Employee(int empNo,double sal,string name):empNo(empNo),sal(sal),name(name){
		
		
	}
	void tofile()
	{
		ofstream myFile("emp.txt",ios::app);
		
		if(myFile.is_open())
		{
			myFile<<empNo<<" "<<sal<<" "<<name<<endl;
					myFile.close();

		}
		else
		{
			cout<<"file not open";
		}
	}
	void fromfile()
	{
		string line;
		ifstream myFile("emp.txt");
		while(getline(myFile,line))
		{
//			getline(myFile,line);
//			cout<<"output from file"<<endl;
				cout<<line<<endl;
			
		}
					myFile.close();

	}
};

int main()
{
	Employee e(2,20005,"satyam");
	Employee e1(3,2000,"himanshu");
	Employee e3(1,2500,"tushar");
	e1.tofile();
	e1.fromfile();
	e.tofile();
	e.fromfile();
	e3.tofile();
	e3.fromfile();
	

//	e.tofile();
//	e.fromfile();
	Employee();
}