#include<iostream>
using namespace std;
int main()
{
	int n,rev,i,digit,temp;
	cout<<"enter the number: "<<endl;
	cin>>n;
	temp=n;
	while(temp!=0){
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	cout<<"reverse of "<<n<<"is "<<rev;
}
