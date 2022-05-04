#include <iostream> 
using namespace std;
float Perimeter(const float i, const float w)
{
    double p;

    p= 2*(i+w);

    return p;
	}

int main()
	{

     float length, width;

     cout << "Rectangle dimensions.\n";

     cout << "Enter the length: ";

     cin >> length;

     cout<<"Enter the width: ";
     
     cin >> width;
     cout<<"\n The perimeter of the rectangle is :" <<Perimeter(length,width);
     
     return 0;
     }
