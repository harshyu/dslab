#include<stdio.h>
#include<stdlib.h>

#define MAX 5

struct stack1 {
int arr[MAX];
int top  ;
}stack;



void push();
void pop();
void display();

void main()
{
stack.top = -1;
int choice;

for(;;)
	{

	printf("Select your choice\n");
	printf("1. Push\n2. top\n3. Display\n4. Exit\n");
	scanf("%d", &choice );
	switch(choice)
		{
		case 1 : push();
		break;
		case 2 : pop();
		break;
		case 3 : display();
		break;
		case 4 : exit(1);
		default : printf("Enter a valid Choice\n");
	}
}
}

void push()
{
int ele;

if(stack.top == MAX -1)
	{
	printf("Stack Overflow \n");
	}
else
	{
	printf("Enter the element to be inserted \n");
	scanf("%d", &ele);
	stack.top++;
	stack.arr[stack.top] = ele;

	}
}


void pop()
{
if(stack.top == -1)
	{
	printf("Stack Underflow \n");
	}
else
	{
	printf("Popped element is %d ", stack.arr[stack.top] );
	stack.top--;
	}
}

void display()
{

int i;

if(stack.top == -1)
	{
	printf("Stack Underflow \n");
	}
else {

 for( i=0 ; i<= stack.top; i++)
 	{
	
	printf("%d\n", stack.arr[i]);
	}
//printf("%d",stack.top);
}
}





















































