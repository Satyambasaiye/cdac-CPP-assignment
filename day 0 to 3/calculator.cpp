#include<iostream>
using namespace std;
int main()
{
	int n,ch,b,a;
	
	do
	{
	cout<<"enter the number "<<endl;
	cin>>a>>b;
	cout<<"enter the choice \n 1.add 2.sub 3.mul 4.div 5.exit"<<endl;

	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<a+b<<endl;
			break;
		case 2:
			cout<<a-b<<endl;
			break;
		case 3:
			cout<<a*b<<endl;
			break;
		case 4:
			cout<<a/b<<endl;
			break;
		case 5:
			cout<<"Thank You!"<<endl;
			break;
		
		default:
			cout<<"invalid choice"<<endl;
			
		
		
		}	
	}while(ch!=5);
	
	return 0;
}
