#include<iostream>
using namespace std;

class b;
class cls
{
	private:
		int p;
	public:
	int a=19;
	friend int length(cls,b);
		
};
class b
{
	private:
		int pri=5623;
	public:
		int B=3;
		friend int length(cls,b);
};
int length(cls c,b B)
{
	cout<<"length is c:"<<c.a;
	cout<<"\nfrom b:"<<B.B<<endl;
	cout<<"pri is:"<<B.pri;
	return c.a;
}
int main(){
	
	int a=10;
	cls x;
	b classb;
	length(x,classb);
	
	return 0;
}


