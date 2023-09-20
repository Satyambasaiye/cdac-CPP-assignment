#include<iostream>
using namespace std;

class Excp{
	protected:
		string msg;
	public:
	Excp(){
	}
	Excp(string msg):msg(msg)
	{
		
	}
	void disp(){
		cout<<"error: "<<msg<<endl;
	}
};

class student{
	public:
		int roll,age;
		string name;
		
	student(){
	}
	student(int roll,int age,string name){
		this->roll=roll;
		this->name=name;
		try{
			
		if(age<18)
		{
			throw Excp("age below 18");		

		}
		this->age=age;
	}catch(Excp e){
		e.disp();
	};
}
	void display(){
		cout<<roll<<" "<<age<<" "<<name<<endl;
	}
};



int main(){
	int n,r,a;
	string name;
	cout<<"enter number of object"<<endl;
	cin>>n;
	student *obj=new student[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter roll number, age, name"<<endl;
		cin>>r>>a>>name;
//		student *obj=new student(r,a,name);
		obj[i]=student(r,a,name);
//		*obj=student(r,a,name);
		obj->display();
	}
	for(int i=0;i<n;i++)
	{
		obj[i].display();
	}
	

	return 0;
}