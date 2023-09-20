#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream myfile("copy.txt");
	string line;
	if(!myfile.is_open()){
		myfile.open("copy.txt",ios::out);
//		cout<<"error: copy file not open"<<endl;
		if(!myfile.is_open()){
//		myfile.open("copy.txt",ios::out);
		cout<<"error: copy file not open"<<endl;
		return 1;
	}
		return 1;
	}
		fstream emp("emp.txt");

	if(!emp.is_open()){
		cout<<"error: emp file not open"<<endl;
		return 1;
	}
	while(getline(emp,line)){
		
			myfile<<line<<endl;
	}
	emp.close();
	myfile.seekg(0);
	while(getline(myfile,line))
	{
		cout<<line<<endl;
	}
	myfile.close();
	return 0;
	
}