#include<iostream>
using namespace std;
int search(double arr[], int size, int x)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==x)	
		{
			return x;
		}
	}
	return -1;
}

int main()
{
	double arr[]={13579,26791 ,26792, 33445 ,55555,62483, 77777, 79422, 85647, 93121 };
	int size=10;
	cout<<"Ticket numbers:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	cout<<"Enter this week's winning ticket number: ";
	double n;
	cin>>n;
	int result=search(arr,size,n);
	if(result==-1)
	{
		cout<<"Invalid!"<<endl;
	}
	else
	{
		cout<<"Ticket number "<<result<<" is present!"<<endl;
	}
}
