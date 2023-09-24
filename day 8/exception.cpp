#include<iostream>
#include<string>
using namespace std;


class Exception{
	protected:
		int a;
	public:
		Exception(){
		}
		Exception(int a):a(a)
		{
			
		}
		void disp()
		{
			if(a==9)
			cout<<"error:age below 18"<<endl;
			
			else if(a==99){
				cout<<"Error:id cannot be 0"<<endl;
			}
		}

};

class Person{
	public:
		string fname,lname;
		int age,id;
	Person(string fname,string lname,int age,int id):fname(fname),lname(lname),age(age),id(id)
	{
		
		try{
			
			if(age<=18){
				throw 9;
			}
			this->age=age;
			if(id==0)
			{
				throw 99;
			}
			
		}
		catch(int a)
		{
			Exception e;
			e=Exception(a);
			e.disp();
			}
			display();	
	}
	void display()
	{
		cout<<"name"<<fname<<" "<<lname<<age<<endl;
	}
	
};

int main()
{
	Person p("satyam","basaiye",18,20);
	
}
