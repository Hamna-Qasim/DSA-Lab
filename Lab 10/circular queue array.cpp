#include<iostream>
using namespace std;
const int size=5;
class queue{
	public:
	int front;
	int count;
	int rear;
	int size;
	int *q;
	
	queue()
	{
		this->front=0;
		this->count=0;
		this->rear=0;
		this->size=100;
		this->q=new int [size];
	}
	
	void enqueue(int value)
	{
		if(count<size)
		{
			q[rear]=value;
			rear=(rear+1)%size;
			count++;
		}
		else
		{
			cout<<"Queue full";
		}
	}
	
	void dequeue()
	{
		if(count==0)
		{
			cout<<"Queue empty"<<endl;
		}
		else
		{
			int value=q[front];
			front= (front+1)%size;
			count--;
		}
	
	}
	
	void getfront()
	{
		if(count!=0)
		{
			cout<<"Value at front: "<<q[front]<<endl;
		}
		else
		{
			cout<<"Empty"<<endl;
		}
	}
	
	void countElements()
	{
		cout<<"Total queue elements:"<<count<<endl;
	}

	void display() {
            cout<<"Queue-> ";
            for (int i = front; i != rear; i = (i + 1) % size) {
                cout << q[i] << " ";
            }
			cout<<" <-End";
			cout<<endl;
    }
};

int main()
{
	queue q;
	q.enqueue(7);
	q.enqueue(6);
	q.enqueue(1);
	q.enqueue(3);
	q.display();
	q.dequeue();
	q.display();
}