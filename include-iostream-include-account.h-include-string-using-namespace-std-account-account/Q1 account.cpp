#include<iostream>
#include "account.h"
#include <string>
using namespace std;

account::account()
{  // default constructor
    depositor_name = " no name ";
    account_number = " 0 ";
    balance = 0.0 ;
}

account::account( string name , string number , double bal)
{
	depositor_name = name;
	account_number = number;
	balance = bal ;

}

account::~account(void)
{
}

void account:: display ()
{
		cout<<"your account name is: "<<depositor_name<<endl<< "your account number is: "<<account_number<<endl<<
		"your balance is: "<<balance<<endl;

}

void account :: deposit (double amount )
{
	
	balance = balance + amount ;
    cout<<" new balance is: "<<balance<<endl;	
}

void account:: withdraw (double value)
{
	balance = balance - value;
	if (balance < 0 )
		cout<< "this withdraw can't be performed "<<endl;
	else
	cout<<" new balance is: "<<balance<<endl;
	
}
