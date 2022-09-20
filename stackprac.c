#include<stdio.h>

#include<stdlib.h>

#define N 5

int stack [N];
int top = -1;


void push();
void pop();
void display();

int main()
{

	int choice;

	while(1){


		printf("\nOperations performed by stack");
		printf("\n1.Push an Element\n2.Pop an Element\n3.Display Elements\n4.Exit");
		printf("\nEnter your Choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:push();
			break;

			case 2:pop();
			break;

			case 3:display();
			break;

			case 4:exit(0);

			default:printf("Enter a valid choice!!!\n");
		}
	}
}

void push()
{

	int x;
	printf("Enter Element to be entered\n");
	scanf("%d",&x);

	if(top == N-1){

		printf("Stack Overflow\n");

	}
	else{

		top ++;
		stack[top] = x;
	}

}

void pop()
{
	int item;
	if(top == -1){

		printf("Stack Underflow\n");
	}
	else{

		item = stack[top];
		top--;
		printf("Popped Element is : %d\n",item);
	}
}

void display(){

	int i;
	for (i = top; i >= 0; i--)
	{
		printf("%d\n",stack[i]);
	}
}