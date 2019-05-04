#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	double price, usedLiters, latePay, latePrice, waterPricing, gallon;
	price = 35;
	latePrice = 20;
	
	cout << " Please enter your water consumption in gallons "<< endl;
	cin >> gallon; 
	
	cout << " Unpaid balance " << endl;
	cin>> latePay;
	
	
	if (latePay >0)
	{
		usedLiters = gallon * 1.10;
		waterPricing = price + usedLiters + latePrice+ latePay;
		cout << " Your water bill is " << waterPricing << endl;
	}
	
	else 
	{
		usedLiters = gallon * 1.10;
		waterPricing = price + usedLiters; 
		cout << " Your water bill is " << waterPricing<< endl;
		
	}
_getch();
return 0;
}
