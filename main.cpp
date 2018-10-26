#include <iostream>

using namespace std;

int main()
{   int a ; int *p ;
   cout<<"Enter no.  (a) :  ";
   cin>>a ;
   p=&a ;
   cout<<"The address of &a :         "<<&a<<endl;
   cout<<"The value of pointer  p :   "<<p<<endl;
   cout<<"The address of pointer &p : "<<&p<<endl;
   cout<<"Dereferencing pointer *p :  "<<*p<<endl;

    return 0;
}
