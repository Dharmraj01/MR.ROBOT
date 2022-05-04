#include <iostream>
using namespace std;
inline double intrest(double p, double r, int n=2)

{



int res;

res=p*r*n/100;

return res;
}

int main()

{

int a,b;

cout<<"Enter P: ";

cin>>a;

cout<<"Enter intrest: ";

cin>>b;

cout<<"Answer is: "<<intrest(a,b)+a;

return 0;

}
