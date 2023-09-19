#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream MyFile("AtoZ.txt");
	if(MyFile.is_open())
	{
	MyFile<<"a b c d e f g h i j k l m n o p k ";
	}
	else
		cout<<"unable to open";
	MyFile.close();

//Reading from file
	
ifstream MyF("AtoZ.txt");
	
while(!MyF.eof())
	{
		string line;
		getline(MyF,line);
		
			cout<<line<<endl;

		MyF.close();
	}	
		

//	cout<<"error occured";
		return 0;
}