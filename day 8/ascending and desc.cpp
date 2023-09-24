#include<iostream>
using namespace std;

//for sorting of array

int* asc(int arr[],int n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	return arr;
}

//for sorting in reve order

int* dec(int arr[],int n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	return arr;
}


int main(){
	int n,*a,*d;
	cout<<"enter no. of element"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	a=asc(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\n desc     "<<endl;
	d=dec(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<d[i]<<" ";
	}
	
	
}
