#include <iostream>
using namespace std;
void swap(int &v1,int &v2)
{
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
	}
	int main()
	{
		int a,b;
		cout<<"Enter value of a :";
		cin>>a;
		cout<<endl<<"Enter value of b :";
		cin>>b;
		
		cout<<"Befor swapping"<<endl;
		cout<<" A = "<< a <<endl;
		cout<<" B = "<< b <<endl;
		swap(a,b);
		cout<<"after swapping"<<endl;
		cout<<" A = "<<a<<endl;
		cout<<" B = "<<b<<endl;
		
		return 0;
		}