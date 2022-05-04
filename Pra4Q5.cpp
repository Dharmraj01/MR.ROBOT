#include <iostream>
using namespace std;

inline int max(int a, int b)
{
return (a>b)?a:b;
	}

int main()
{

int a,b;

cout<<"Enter A: ";

cin>>a;

cout<<"Enter B: ";

cin>>b;

cout<<"Largest number is "<<max(a,b);

return 0;

}
