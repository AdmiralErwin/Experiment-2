#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
	int a, sum=0;

	do
	{

	cout<<" Enter a number "<<endl;
	cin>> a;

	for(int u = 0; u <= a; u++)
	
	{
	sum+=u;
	
	}
	
	cout<<sum<<endl;
	
	}
	while(a>0);
				
				
	do
	
	{
		
	cout<<" Thank You!!! "<<endl;
		system("pause");
								
} 
	while(a<=0);
	
	return 0;
}
