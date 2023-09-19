#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter the number ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum up to "<<n<<"number is "<<sum;
}
