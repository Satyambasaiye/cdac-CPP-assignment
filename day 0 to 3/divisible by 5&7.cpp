#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	if(n%5==0 && n%7==0 ){
		cout<<"number is idivisible by 5 and 7 ";
	}
	else{
		cout<<"number is not divisible by either 5 &7 or both";
	}
}
