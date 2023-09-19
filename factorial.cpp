#include<iostream>
using namespace std;
int main()
{
	int i,n,res=1;
	cout<<"enter the number to find factorial";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	cout<<"factorial of "<<n<<" is :"<<res;
}
