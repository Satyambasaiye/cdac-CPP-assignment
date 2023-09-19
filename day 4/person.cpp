#include<iostream>
using namespace std;
class person
{
	private:
		string name,city;
		int age;
		
	public:
		person(string name, string city, int age)
		{
			this->name=name;
			this->city=city;
			this->age=age;
		}
		string getName()
		{
			return this->name;
		}
		int getAge()
		{
			return age;
		}
		void setName(string name)
		{
			this->name=name;
		}
		void setAge()
		{
			this->age=age;
		}
		person()
		{
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"City: "<<city<<endl;
			cout<<"age: "<<age<<endl;
		}
};
int main()
{
	person p("amar","sambhajinagar",26);
	p.display();
	p.getAge();
	p.getName();
	cout<<"getName:"<<p.getName()<<endl;
	cout<<"getAge:"<<p.getAge()<<endl;
}
