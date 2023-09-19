#include<iostream>
using namespace std;
int main()
{
	char c,x;
	do{
	cout<<"enter the character"<<endl;
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
	cout<<"you entered vowels"<<endl;
}
	else{
		cout<<"you entered consenant \n";
	}
	cout<<"want to continue y/n   \n";
	cin>>x;
}
while(x!='n');
}
