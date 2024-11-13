#include<iostream>
using namespace std;
double sum(int arr[],int size)
{
	if(size<=0)
	return 0;
	
	else
	{
    	return (sum(arr, size - 1) + arr[size - 1]); 
	}
}

int main()
{
	int size=5;
	int arr[size]={1,8,9,0,5};
	int result=sum(arr,size);
	
	if(result==0)
	{
		cout<<"Sum cannot be calculated"<<endl;
	}
	else
	{
		cout<<"Sum of array elements : "<<result<<endl;
	}
	
}
