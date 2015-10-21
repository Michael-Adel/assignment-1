1) a class is a definition of the behaviour of an object. it translats an abstraction to a user-defined type.It combines data representation and methods for manipulating that data into one neat package

2) a class accomplish abstraction by defining a base class & designing derived classes through it so that the object just call the base class & this class controls the rest. 
encapsulation is acomplished by hiding data that arent supposed to be used by anything . public accessibility means that anyone can see it , protected permits only objects of this class & derived classes . while private is for objects of this class only.

3) a class is a definition of the behaviour of an object , while Objects are instances of classes

4) Class data members are the data component of a class , while Class funcitions are the public interface 

5) class account {
private:
   char depositor_name[20];
   string account_number ;
   double balance;
public :
   void account_info ( char depositor_name[] , string account_number    ,double balance ) ;
   void deposit ( double amount );
   void withdraw ( double value );
  }

6) constructors are called whenever an object is created , class destructors are called at the end of the use of class after the expiration of the called function.

7) class account{
  account::account()
    {
     depositor_name[20]= {n,o, ,n,a,m,e};
     account_number = “ 0 “;
     balance = 0.0;

     }

} 

8) default constructor creates an object when you don’t provide initialization values.it’s advantage is that if you forgot to initialize the constructor, you can use the class normally because the default constructor creates the object & help you use the class normally

9) class stock
{
  Private:
   string company;
   int shares ;
   double share_val;
   double total_Val;
   void set_tot() { total_val = shares * share_val; }
  public:
  string info() { const company , int shares , double tot_val };

}

10) “this” is a pointer that points to the object used to invoke a member function .while ”*this” refers to the invoking object as a whole ( the value itself ).
