#include<iostream>
using namespace std;
int main()
{
	int bs,tax;
	cout<<"enter basic salary of employee: ";
	cin>>bs;
	if(bs<50000){
		cout<<"tax is 0";
	}
	else if(bs>50000 && bs<300000){
		tax=(bs*20)/100;
		cout<<"tax is "<<tax;
	}
	else{
		tax=(bs*30)/100;
		cout<<"tax is"<<tax;
	}
}
