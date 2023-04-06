#include<iostream> // system header file 
// this.h// user define file
using namespace std;
int main ()
{
    // arthmetics operators
    int a=10,b=5;
    cout<<"the addition of a+b is:"<<a+b<<endl;
    cout<<"the substraction of a-b is:"<<a-b<<endl;     
    cout<<"the addition of a*b is:"<<a*b<<endl;
    cout<<"the addition of a/b is:"<<a/b<<endl;
    cout<<"the addition of a%b is:"<<a%b<<endl;
    cout<<"the post increment of a++ is:"<<a++<<endl;
    cout<<"the pre increment of ++a is:"<<++a<<endl ;
    cout<<"the pre decrement of --a is:"<<--a<<endl;
    cout<<"the post decrement of a-- is:"<<a--<<endl;

    // comparison / relation operators
   // int a=65,b=70;
    cout<<"the comparison operators are following"<<endl;
    cout<<"the value of a==b to b:"<<(a==b)<<endl;
    cout<<"the value of  a!=b to b:"<<(a!=b)<<endl;
    cout<<"the value of  a>b to b:"<<(a>b)<<endl;
    cout<<"the value of  a<b to b:"<<(a<b)<<endl;
    cout<<"the value of  a>=b to b:"<<(a>=b)<<endl;
    cout<<"the value of  a<=b to b:"<<(a<=b)<<endl;
    
    // the logical operators are followings 
    cout<<" the logical operators are followings"<<endl;
    cout<<"the value of this logical and operator ((a==b)&&(a>b)) :"<<((a==b)&&(a>b))<<endl;
    cout<<"the value of this logical or operator ((a==b)||(a>b)) :"<<((a==b)||(a>b))<<endl;
    cout<<"the value of this logical and operator (!(a==b)) :"<<(!(a==b))<<endl;



}