#include <iostream>
#include <string>
#include "account.h"
using namespace std;
void main()
{
	string x,y;
	double z,j;
	int s;
	cout<<"enter your account name ( no_space ) \n";
	cin>>x;
	cout<<"enter your account number \n";
	cin>>y;
	cout<<"enter your balance \n";
	cin>>z;
	account mine ( x , y , z );
	mine.display();
	cout<<"choose 1 to deposit & 2 to withdraw "<<endl;
	cin>>s;
	if ( s==1)
		{
			cout<<"enter the amount to deposit \n";
			cin>>j;
			mine.deposit(j);
			
	    }

	else if ( s == 2)
	{
		cout<<"enter the amount to withdraw \n ";
		cin>>j;
		mine.withdraw(j);
	}

	else
		cout<<"unavailable choice "<<endl; 
	

}
