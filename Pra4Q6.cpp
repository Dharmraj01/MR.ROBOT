#include<iostream>
using namespace std;
int area(int a)
{
	return a*a;
}
double area(double r,int h)
{
	
	return 2*3.14*r*r*h;
}
long int area(int l,int b)
{
	return l*b;
}
int main()
{
	cout<<"area of squara : ";
	cout<<area(10)<<endl;
	cout<<"area of cylinder : ";
	cout<<area(4.5,10)<<endl;
	cout<<"area of rectangle : ";
	cout<<area(10,10)<<endl;
}
