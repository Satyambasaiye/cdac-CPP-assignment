#include<iostream>
using namespace std;
int main(){
	int n,pow,res=1;
	cout<<"enter the number";
	cin>>n;
	cout<<"enter the power";
	cin>>pow;
	for(int i=1;i<=pow;i++)
	{
		res=res*n;
		
	}
	cout<<"answer is"<<res;
}
