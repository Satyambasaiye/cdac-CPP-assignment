#include<iostream>
using namespace std;
int main()
{
	int n,ch;
	cout<<"enter the number"<<endl;
	do
	{
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"one"<<endl;
			break;
		case 2:
			cout<<"two"<<endl;
			break;
		case 3:
			cout<<"three"<<endl;
			break;
		case 4:
			cout<<"four"<<endl;
			break;
		case 5:
			cout<<"five"<<endl;
			break;
		case 6:
			cout<<"six"<<endl;
			break;
		case 7:
			cout<<"seven"<<endl;
			break;
		case 8:
			cout<<"eight"<<endl;
			break;
		case 9:
			cout<<"nine"<<endl;
			break;
//		case 0:
//			cout<<"zero"<<endl;
//			break;
		default:
			cout<<"invalid choice"<<endl;
			
		
		
		}	
	}while(ch!=10);
	
	return 0;
}
