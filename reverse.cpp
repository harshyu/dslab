#include <iostream>

using namespace std ;

int main ()
{
int a ,r , b ;

cout << " Enter the number of digit to be reversed ";
cin >> a ;
cout << "Enter The number ";
cin >> b;


for ( int i = 0 ; i < a ; i++)
	{	
	r = b % 10 ; 
	b = b/10;
	cout << r ;
	}
return 0 ;






}
