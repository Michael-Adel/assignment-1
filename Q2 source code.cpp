#include<iostream>
#include <string>
#include "person.h"
using namespace std;
void main()
{ 
 string s = "michael";
	string s1= "adel";
	person one;
	person two (s) ;
	person three ( s1 , s);
	one.show();
	cout<<endl;
	one.formalshow();
	cout<<endl;
	two.show();
	cout<<endl;
	two.formalshow();
	cout<<endl;
	three.show();
	cout<<endl;
	three.formalshow();
}
