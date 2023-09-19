#include<iostream>
using namespace std;
int main()
{
	int first,second,third;
	cout<<"enter the angles of triangle ";
	cin>>first>>second>>third;
	if(first+second+third==180){
		cout<<"triangle is valid ";
		
	}
	else{
		cout<<"triangle is invalid ";
	}
}
