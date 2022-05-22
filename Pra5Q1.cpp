#include<iostream>
#include<cstring>
using namespace std;
/*void g_d();
void p_d();*/

struct vehical {
	char     name[60];
	char     c_name[80];
	char     c_clour[50];
	
	int      modal;
	long int num;
	long int c_num;


	void g_d() {
		cout<<        "\n\n\n\t\t\t\t  Enter Vehical Details \n";
		cout<<"----------------------------|_________________________________|----------------------------";

		cout<<  "\n\t\t\t\t Own Name : "          ;		cin>>  name;
		cout<<  "\n\t\t\t\t Car Name : "          ;		cin>>  c_name;
		cout<<  "\n\t\t\t\t Car Modal number : "  ;		cin>>  modal;
		cout<<  "\n\t\t\t\t Car Clour : "         ;		cin>>  c_clour;
		cout<<  "\n\t\t\t\t Car number plat : "   ;		cin>>  num;
		cout<<  "\n\t\t\t\t Car cheshi number : " ;		cin>>  c_num;

	}
	void p_d() {
		cout<<        "\n\n\t\t\t\t    Vehical Details \n";
		cout<<"----------------------------|_________________________________|----------------------------";

		cout<<  "\n\n\t\t\t\t Own Name : "			  <<name;
		cout<<  "\n\n\t\t\t\t Car Name : "			  <<c_name;
		cout<<  "\n\n\t\t\t\t Car Modal number : "    <<modal;
		cout<<  "\n\n\t\t\t\t Car Clour : "		  	  <<c_clour;
		cout<<  "\n\n\t\t\t\t Car number plat : "	  <<num;
		cout<<  "\n\n\t\t\t\t Car cheshi number : "   <<c_num;


	}
};

int main() {
	int cust_m,i;
	 cout<<"Enter How many custmber : "; cin>>cust_m;
	
	for(i=1;i<=cust_m;i++)
	{
		vehical v[i]
		if(i = cust_m)
		{  
	      i = 1;
			while(i<=cust_m){
				v[i].g_d();
				i++;
			}
		  i = 0;
			while(i<=cust_m){
				v[i].p_d();	
				i++;
			}
				
			
		}
		else{
			cout<<"hello";
		}
		
	}
}
