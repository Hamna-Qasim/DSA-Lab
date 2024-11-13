#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
	
		node()
		{
			this->data=0;
			this->next=NULL;
		}
};
class queue
{
	public:
		node* front;
		node* rear;
		
		queue()
		{
			this->front=NULL;
		}
		
		void enqueue(int data)
		{
			if (front==NULL)
			{
				node *temp= new node;
				temp->data=data;
				temp->next=temp;
				front=temp;
				rear=temp;
			}
			else
			{
				node *temp= new node;
				temp->next=front;
				temp->data=data;
				rear->next=temp;
				rear=temp;
			}
		}
		
		void dequeue()
		{
			if (front==NULL)
			{
				cout<<"Queue is empty"<<endl;
			}
			else if(front==rear)
			{
			
			}
			else
			{
			node *temp= new node;
			temp=front;
			front=front->next;
			rear->next=front;
			delete temp;
			}
		}
		
		void frontt()
		{
			cout<<"Current front is "<<front->data<<endl;
		}
		
		
		void rearr()
		{
			cout<<"Current rear is "<<rear->data<<endl;
		}
		
		void display()
		{
			node *f= front;
			cout<<"Queue-> ";
			do
			{
				cout<<f->data<<" ";
				f=f->next;
			}while(f !=front);
			cout<<" <-End";
			cout<<endl;
		}
		
		void isempty()
		{
			if(front==NULL)
			{
				cout<<"Queue is empty"<<endl;
			}
			else
			{
				cout<<"Queue is not empty"<<endl;
			}
		}
		
};
int main()
{
	queue q1;
	q1.enqueue(7);
	q1.enqueue(6);
	q1.enqueue(3);
	q1.enqueue(1);
	q1.display();
	q1.dequeue();
	q1.dequeue();
	q1.display();
}






















