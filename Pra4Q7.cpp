#include<iostream>
using namespace std;
int volume(int a)
{
	return a*a*a;
	
}
float volume(double a,float b)
{
	return 3.14*a*a*b;
}
long int volume(int a,float b,double c)
{
	return a*b*c;
}
int main()
{
	cout<<"volume of cube : "<<volume(2)<<endl;
	cout<<"volume of cyliner : "<<volume(10.4,2.5)<<endl;
	cout<<"volume of rectangular : "<<volume(2,3.4,4.4)<<endl;
	
	return 0;
}
