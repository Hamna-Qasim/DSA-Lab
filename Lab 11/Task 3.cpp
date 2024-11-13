#include<iostream>
using namespace std;
int linear(int arr[], int size, int x)
{
	if(size==0)
	return -1;
	else if(arr[size-1]==x) 
	return size-1;
	else
	return linear(arr, size-1, x);
}

int main()
{
	int arr[]={3,5,9,0,1};
	int size=5;
	cout<<"Array Elements:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter element to search:";
	int n;
	cin>>n;
	
	int r=linear(arr,size,n);
	if(r==-1)
	{
		cout<<"Element is not present in the array."<<endl;
	}
	else
	{
		cout<<"Element found at index: "<<r<<endl;
	}
}
