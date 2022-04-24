/* 
   *
   **
  ***
 ****
*****
*/
#include <iostream>
using namespace std;
int main(){
	int i,j,k,m=1;
	for(i = 5;i>=1;i--)
	{
			for(k=1;k<=i;k++)
			{
				cout<<" ";
			}
		    for(j = 1;j<=m;j++)
		    {		
			    cout<<"*";
			}
	  m++;
	  cout<<"\n";
		
		}
			return 0;
			}
