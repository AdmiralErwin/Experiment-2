#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int number, first=2, second=3, nextnumber;
    cout << "The next 20 numbers of the Fibonacci sequence after 0 and 1 is" << endl;
    number=20;
    
    for(int x=0;x<number;x++)
    {
    	cout<<first<<", ";
    	nextnumber=first+second;
    	first=second;
    	second=nextnumber;
	}
return 0;
}
