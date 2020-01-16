#include <iostream>
#define MAX 10
using namespace std ;
struct stack {
	int top;
	int st[MAX];

	}s;
void push();
int pop();
void display();



int main ()



{
int choice ;
s.top = 0;
while(1)
{

cout << "SELECT YOUR CHOICE \n";
cout << "1. Push \n2. Pop \n3. Display \n4. EXIT \n";
cin >> choice ;
switch(choice)
	{ 
	case 1: push();
		break ;
	case 2: pop();
		break ;
	case 3: display();
		break ;
	case 4: exit(1);
		break;
	default : cout <<"Enter a valid choice";
	}
	}
}

void push()
{
	int ele;
	if ( s.top == MAX)
	{
	cout <<" OVERFLOW \n";
	}
	else
	{	
	cout<< " Enter the element to be inserted ";
	cin >> ele;
	s.st[s.top] = ele;
	s.top ++;
	}
}

int pop ()
{
	if(s.top == 0)
	{
	cout << "UNDERFLOW\n ";
	}
	else
	{
	cout << s.st[s.top];
	s.top--;
	}
}


void display()
{
	if ( s.top == 0)
	{
	cout<< " No element ";
	}
	else
	{
	for( int i = 0 ; i < s.top ; i++)
	cout << s.st[i] << "\n";
	}
}






















































	


