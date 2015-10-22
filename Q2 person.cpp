#include "person.h"
#include<iostream>
#include <string>
using namespace std;

person::person()
{
	lname = " ";
	fname = " ";
}

person::person(string ln) 
{
	lname = ln;
	fname= "hey you";
}

person::person(string ln , string fn) 
{
	lname = ln;
	fname= fn;
}


void person::show()
{
	cout<<fname<<" "<<lname<<endl;
}

void person::formalshow()
{
	cout<<lname<<" , "<<fname<<endl;
}

