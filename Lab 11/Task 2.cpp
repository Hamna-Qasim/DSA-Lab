#include<iostream>
using namespace std;
int search(int arr[], int left, int right, int x)
{
	if(right>=left)
	{
		int mid=left+(right-left)/2;
		if(arr[mid]==x)
		return mid;
		
		if(arr[mid]>x)
		return search(arr,left,mid-1,x);
		if(arr[mid]<x)
		return search(arr,mid+1,right,x);
	}
	return -1;
}

int main()
{
	int arr[]={10,20,30,40,50};
	int size=5;
	int result=search(arr,0,size-1,30);
	if(result==-1)
	{
		cout<<"Element is not present in the array."<<endl;
	}
	else
	{
		cout<<"Element present at index: "<<result<<endl;
	}
}
