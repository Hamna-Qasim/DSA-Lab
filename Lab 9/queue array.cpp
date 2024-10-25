#include<iostream>
using namespace std;
class queue
{
	public:
		int front;
		int rear;
		int size;
		int *q;
		
	queue()
	{
		this->front=0;
		this->rear=-1;
		this->size=100;
		this->q=new int [size];
	}
	
	void enqueue(int data)
	{
		if(rear<size)
		{
			rear++;
			q[rear]=data;
			
		}
		else
		{
			cout<<"Queue overflow"<<endl;
		}
	}
	
	void dequeue()
	{
		if(rear==-1)
		{
			cout<<"Queue underflow"<<endl;
		}
		else
		{
			front++;
		}
	}
	
	void rearr()
	{
		cout<<"Current rear is "<<q[rear]<<endl;
	}
	
	void frontt()
	{
		cout<<"Current front is "<<q[front]<<endl;
	}
	
	void display()
	{
		cout<<"Queue-> ";
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<" ";
		}
		cout<<" <-End";
		cout<<endl;
	}
};
int main()
{
	queue q1;
	q1.enque(7);
	q1.enque(6);
	q1.enque(1);	
	q1.display();
	q1.deque();
	q1.display();
	q1.rearr();
	q1.frontt();
	
}




















































