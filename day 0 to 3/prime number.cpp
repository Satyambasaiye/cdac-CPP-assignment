#include<iostream>
using namespace std;
int main(){
	int n,i;
	bool flag=true;
	
	
	cout<<"enter the number \n";
	cin>>n;
	for (i=2;i<n;i++){
		if(n%i==0){
			flag=false;
			break;
			
		}
		
	}
	if (flag==false){
		cout<<"number is not prime";
	}
	else{
		cout<<"number is prime";
	}
}
