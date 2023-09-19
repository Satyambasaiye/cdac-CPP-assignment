#include<iostream>
using namespace std;
int main()
{
	int odd,even,n,sumOdd=0,sumEven=0;
	cout<<"enter the number ";
	cin>>n;
	for (int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sumEven=sumEven+i;
		}
		else{
			sumOdd=sumOdd+i;
		}}
		cout<<"sum of odd number in range 1 to "<<n<<"is "<<sumOdd<<endl;
		cout<<"sum of even number in range 1 to "<<n<<"is "<<sumEven<<endl;

}
