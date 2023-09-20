#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//	ifstream myfile("emp.txt");
	ifstream myfile("emp.txt"); 

	string line;
	if(myfile.is_open()){
	while(getline(myfile,line))
	{
		cout<<line<<endl;
	}
	myfile.close();
}
	else{
		cout<<"fail to open file"<<endl;
	}
	return 0;
}