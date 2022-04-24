#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value ";
	cin>>a;
	if(a == 2)
	{
		cout<<a<<" is prime";
	}
	else if(a % 2 == 0)
	{
		cout<<a<<" is not prime";
	}
	else 
	{
		cout<<a<<" is prime";
		}
}
