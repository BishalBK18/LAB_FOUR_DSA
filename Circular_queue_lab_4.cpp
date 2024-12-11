#include<stdio.h>
#define size 5
void enqueue(int);
void dequeue();
void front_element();
void display();
void is_empty();
int circular_queue[size];
int rear=-1,front=-1;
int main()
{ int choice ,data;
while(1){
	printf("\nEnter 1 for Enqeueu:");
	printf("\nEnter 2 for Dequeue: ");
	printf("\nEnter 3 for Front:");
	printf("\nEnter 4 for Display:");
	printf("\nEnter 5 for check empty:");
	printf("\nEnter 6 for Exit\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("\n Enter data:");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			front_element();
			break;
			case 4:
				display();
				break;
				case 5:
				is_empty();
				break;
				case 6:
						printf("\nBye Bye");
						return 0;
						break;
						default:
								printf("\nInvalid choice.Try Again!");
	}
}
	return 0;
}
void enqueue(int n)
{
 if((rear+1)%size==front)
{
	printf("\nQueue is full");
	return ;
}
	else if(rear==-1&&front==-1)
	{
		rear=(rear+1)%size;
		front=(front+1)%size;
	}
	else 
	{
	rear=(rear+1)%size;
	}
	circular_queue[rear]=n;
}
void dequeue()
{
	if(rear==-1&&front==-1)
	{
		printf("\nQueue is empty");
	}
	else if(rear==front)
	{  	printf("\n%d is dequeued sucessfully",circular_queue[front]);
		rear=-1;
		front=-1;
	}
	else{
			printf("\n%d is dequeued sucessfully",circular_queue[front]);
		front=(front+1)%size;
	}
}
void front_element()
{
	if(rear==-1&&front==-1)
	{
			printf("\nQueue is empty");
	}
	else 
		printf("\nThe element at the front is %d",circular_queue[front]);
}
void display()
{
	int i;
	if(rear==-1&&front==-1)
	{
			printf("\nQueue is empty");
	}
	else{
		printf("\nYour Elements:\n");
		for(i=front;i!=rear;i=(i+1)%size)
		{
				printf("\n%d",circular_queue[i]);
		}
		printf("\n%d",circular_queue[rear]);
	}
}

void is_empty()
{
	if(rear==-1&&front==-1)
	{
		printf("\nQueue is empty");
	}
	else 
	printf("Queue is not empty");
}

