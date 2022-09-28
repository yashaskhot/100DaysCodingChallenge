#include<stdio.h>
#include<stdlib.h>

#define N 5
int circqueue[5];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void dislay();

int main(){

	int choice;

	while(1){

		printf("\nOperations to be performed by the Queue");
		printf("\n1.Add an Element\n2.Delete an Element\n3.Display the Elements\n4.Exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);

		switch(choice){


			case 1 : enqueue();
			break;

			case 2 : dequeue();
			break;

			case 3 : display();
			break;

			case 4 : exit(0);

			default : printf("Enter a Valid Choice!!!");


		}
	}
}

void enqueue(){

	int x;
	printf("Enter Element to be Inserted:\n");
	scanf("%d",&x);

	if (rear == front == -1)
	{
		rear = front = 0;
		queue[rear] = x;
	}

	if (((rear + 1) % N) == front)
	{

		printf("Queue is Full\n");

	}

	else{

		rear = (rear + 1)%n;
		queue[rear] = x;
	}
}

void dequeue(){

	if(front == rear == -1){

		printf("Queue is Empty\n");
	}

	else if(front == rear)
	{
		front = rear = -1;
	}

	else{

		front = (front + 1) % N;
	}
}

void display(){

	int i = front;
	if(front == rear == -1){

		printf("Queue is Empty\n");
	}
	else{

		printf("Queue is : ");
		while(i != rear){

			printf("%d",queue[i]);
			i = (i+1) % N ;
		}

		printf("%d",queue[rear] );
	}
}
