#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("example.txt");
	
	file<<"this is first line";
	file.close();
	
	string line;
	ifstream File("example.txt");
	while(getline(File,line))
	{
		cout<<line;
	}
}