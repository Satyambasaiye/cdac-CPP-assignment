#include<iostream>
#include<cmath>
using namespace std;
void swap(int a,int b)
{
	int c=0;
	c=a;
	a=b;
	b=c;
	cout<<"after swapping"<<a<<" "<<b<<endl;
}

int main()
{
	int a=10,b=2,c;
	c=pow(a,b);
	cout<<c<<endl;
	swap(a,b);
	cout<<"after calling swap in main: "<<a<<" "<<b<<endl;
	
}