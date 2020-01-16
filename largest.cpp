#include<iostream>

using namespace std;

main()

 
{
int a , b, c, d ,e ;
	cout<< " Enter 3 number ";
	cin >> a >> b >> c  ;
	d = a>b?(a>c?a:c):(b>c?b:c);
	cout << d ;
}
	
