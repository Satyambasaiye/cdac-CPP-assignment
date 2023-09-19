#include<iostream>
using namespace std;
int main()
{
	int i,n;
 	cout<<"enter the number "<<endl;
 	cin>>n;
 	
 	for (i=1;i<=n;i++)
 	{
 	bool flag=true;

 		if(i==0 ||i==1)
 		{
 			continue;
		 }
		 else{
 		for(int j=2;j<i;j++)
 		{
 			if(i%j==0)
 			flag=false;
		 }
		 if(flag==true)
		 {
		 	cout<<i<<" ";
		 }	 
	 }}	 
}
