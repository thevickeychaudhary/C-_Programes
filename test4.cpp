#include<iostream>
using namespace std;
int glo = 44;   // gloabal variable
void sum ()
{
    int a;
    cout<<glo<<endl;
}
int main()
{
   int glo = 33;  //  local variable
    glo=87;
   // int a=4;
    //int b=5;
    //float pi=3.14;
    //char c='d';
    //cout<<"here test 4.\n the value of a is"<<a<<"\nthe value of b is"<<b<<endl;
    //cout<<"the value of pi is "<<pi<<endl;
    //cout<<"the value of c is "<<c;
    bool is_true = true;
    sum();
    cout<<glo<< is_true;
    return 0;
}