#include<conio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	{
	float unpaid, waterBill, gallon, penalty;
	
	cout << " Please indicate your water consumption in gallons " << endl;
	cin >> gallon;
	waterBill = (gallon * 1.10) + 35;
	cout << " If you have unpaid balance, please enter if not press 0 " << endl;
	cin >> unpaid;
	penalty = waterBill + 20;
	
	if (unpaid>0)
	
	cout << penalty << " to be paid " << endl;
	else if (unpaid==0)
	
	cout << waterBill <<" to be paid " <<endl;
	else
	cout << " Error " << endl;
	
	_getch ();
	return 0;
	}
	
}
