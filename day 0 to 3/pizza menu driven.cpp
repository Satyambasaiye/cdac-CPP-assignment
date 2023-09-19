#include<iostream>
using namespace std;
int main()
{
	int qnt,n,i,ch,total;
	cout<<"1.veg pizza 80 2.non-veg pizza 150 3.onion pizza 100 4.exit"<<endl;
	do 
	{
	 cout<<"enter the choice"<<endl;
	 cin>>ch;
	 switch(ch)
	 {
	 	case 1:
	 		cout<<"enter quantity"<<endl;
	 		cin>>qnt;
	 		total=total+qnt*80;
	 		break;
	 		
 		case 2:
 			cout<<"enter quantity"<<endl;
			 cin>>qnt;
			 total=total+qnt*150;
			 break;
		 case 3:
		 	cout<<"enter quantity"<<endl;
		 	cin>>qnt;
		 	total=total+qnt*100;
		 	break;
	 	case 4:
	 		cout<<"exit"<<endl;
	 		break;
 		default:
			cout<<"please enter valid choice"<<endl;;
			
			 			  }		 
	   	
	}while(ch!=4);
	cout<<"total bill is "<<total<<endl;
}
