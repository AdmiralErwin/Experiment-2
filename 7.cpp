#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float a;

    cout << " Enter a number " << endl;
    cin >> a;

    for (float u = 1; u <= 10; ++u) 
	{
    	
        cout << a << " * " << u << " = " << a * u << endl;
    }
    
    _getch();
    return 0;
}
