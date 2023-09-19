#include<iostream>
using namespace std;
int main()
{
	int n,rev,d,temp;
 	cout<<"enter the number ";
 	cin>>n;
 	temp=n;
	do{
		d=temp%10;
		rev=rev*10+d;
		temp=temp/10;
//		cout<<" temp is "<<temp<<" rev is "<<rev;
	}while(temp!=0);
	if(rev==n){
	
		cout<<"number is palindrome";
	}
	else
	{
		cout<<"number is not palindrome";
		}	
 }
