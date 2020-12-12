#include<stdio.h>
#define MAX 10

int STACK[MAX],TOP;

void push(int x);
int pop();

	void main()
	{

	int data,choice;
	
	do

	{
		
	printf("\n\t\t\t\tStack Using Array\n\n\t\t\t\t1.Push\n\n\t\t\t\t2.Pop\n\n\t\t\t\t3.Exit\n\n\t\t\t\tEnter your choice:");
	scanf("%d",&choice);

	switch(choice)

	{
		case 1:
		printf("\n\t\t\tEnter value to push:");
		scanf("%d",&data);
		break;
		
		case 2:
		printf("\n\t\t\tThe popped value is:%d",pop());
		break;
		
		case 3:
		break;
		default:printf("\nEnter correct choice:");	
	}

	}
	while(choice!=3);
	}
	void push(int x)
	
	{
		
		if(TOP==MAX-1)

		printf("\nStack Overflow");

		else

		STACK[++TOP]=x;
	
	}
	
	int pop()
	
	{
		if(TOP==-1)
		
		{
		
		printf("\nStack underflow");
	
		return 0;
		
		}
		
		else
		
		return STACK[TOP--];
	}
