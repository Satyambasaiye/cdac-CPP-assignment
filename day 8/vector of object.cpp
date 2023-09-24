#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class Student{
	protected:
		string name;
		char grade;
		int age;
	public:
	Student(string name,char grade,int age):name(name),grade(grade),age(age)
	{
		
	}
	void display()
	{
//		int count=1;
		cout<<" name:"<<name<<" grade "<<grade<<" age :"<<age<<endl;
//		count++;
	}
	void addfile()
	{
		ofstream myfile("temp.txt");
		myfile<<name<<" "<<grade<<" "<<age<<endl;
		myfile.close();
	}
	void fromfile()
	{
		ifstream myFile("temp.txt");
		string line;
		while(getline(myFile,line))
		{
			cout<<line<<endl;
		}
	}

};


int main(){
	vector <Student> std;
	string n;
		char g;
		int a,ch=1;
	
	while(ch!=0)
	{
		cout<<"enter name grade and age"<<endl;
		cin>>n>>g>>a;
		Student s=Student(n,g,a);
		std.push_back(s);
		
		cout<<"continue 0/1"<<endl;
		cin>>ch;
		
	}
	for(int i=0;i<std.size();i++)
	{
		cout<<i<<" "<<endl;
		std[i].display();
	}
	

}
