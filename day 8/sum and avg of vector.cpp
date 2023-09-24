#include<iostream>
#include<fstream>
#include<vector>
using namespace std;



int main()
{
	int n;
	vector <int> vec;
	int ch,total=0,avg;
	while(ch!=-1)
	{
		cout<<"enter number"<<endl;
		int a;
		cin>>a;
		vec.push_back(a);
		ch=a;		
	}
	cout<<"vector is: ";
	for(int i=0;i<vec.size();i++)
	{
		total=total+vec[i];
//		cout<<"total is:"<<total<<endl;
//		cout<<vec[i]<<" ";
	}
	cout<<"\n sum is:"<<total+1<<endl;
	cout<<"avg is :"<<(float)(total+1)/vec.size();
}
