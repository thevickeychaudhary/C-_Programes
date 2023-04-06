#include<iostream>
using namespace std;
int main()
{

       // pointer----> data type which holds the address of other data type
           // -----> address of operator
  int a=3;
  int  *b=&a;
  cout<<"the address of a is :"<<b<<endl;
  cout<<"the address of a is :"<<&a<<endl;
       //(value at) deference operator
       cout<<"the value of b is :"<<*b<<endl;

       // pointer to pointer variable
       int **c=&b;
       cout<<"the address of b is :"<<&b<<endl;
       cout<<"the address of b is :"<<c<<endl;
       cout<<"the value at adderess c is :"<<*c<<endl;
       cout<<"the value at address_at(value_at(c)) is :"<<**c<<endl;
return 0;
}