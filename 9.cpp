#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    int b;

    cout << " Enter how many rows ";
    cin >> a;
    
    cout << " Enter how many columns ";
    cin >> b;
    
    for (int row = 1; row <= a; ++row) 
    {
        for (int col = 1; col <= b; ++col) 
        {
            cout << " * ";
        }
        cout << endl;
    }
    _getch();
    return 0;
    
}
