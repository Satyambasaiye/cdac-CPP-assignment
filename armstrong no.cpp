#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum=0,i;
	cout<<"enter the number"<<endl;
	cin>>n;
	int num=n;
	
	while(num!=0)
	{
		
		digit=num%10;
		sum=sum+(digit*digit*digit);
		num=num/10;
		
	}
	if(sum==n){
		cout<<"given number is armstrong"<<endl;
	}
	else
	cout<<"given number is not armstrong";
	
}
