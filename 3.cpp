#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	float a, b, c;
	
	cout << " Please enter first number " << endl;
	cin >> a;
	
	cout << " Please enter second number "<< endl;
	cin >> b;
	
	cout << " Please enter third number " << endl;
	cin >> c;
	
	if (a>c && a>b)
	cout << a << " is the largest number" << endl;
	else if (b>a && b>c)
	cout << b << " is the largest number" << endl;
	else if (c>a && c>b)
	cout << c << " is the largest number" << endl;
	else if (a==b && b==c && a==c)
	cout << " The numbers entered are equal " << endl;
	else
	cout << " Make a correct input " << endl;
	
	_getch();
	return 0;
}
