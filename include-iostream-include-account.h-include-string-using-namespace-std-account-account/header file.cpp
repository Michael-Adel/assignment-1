#include <string>
#include <iostream>
using namespace std;

class account
{ 
private:
	string depositor_name;
   string account_number;
   double balance;

public:
	
	void display ();
	account( string name , string number , double bal);
    void deposit ( double amount);
    void withdraw (double value );
	account(void);
    ~account(void);
	  
};

