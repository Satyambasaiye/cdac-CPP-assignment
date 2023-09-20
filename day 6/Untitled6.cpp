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
	}
	Employee(int empNo,double sal,string name):empNo(empNo),sal(sal),name(name){
		
	}
	void tofile()
	{
		ofstream myFile("emp.txt");
		if(myFile.is_open())
		{
			myFile<<empNo<<" "<<sal<<" "<<name<<endl;
		}
		else
		{
			cout<<"file not open";
		}
		myFile.close();
	}
	void fromfile()
	{
		string line;
		fstream myFile("emp.txt");
		while(myFile.eof())
		{
			getline(myFile,line);
				cout<<line;
			
			myFile.close();
		}
	}
};