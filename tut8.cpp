#include<iostream>
 #include<iomanip>

using namespace std;
int main()
{
     // constant in c++
/*
     const int a=4;   // constant 
     cout<<"the value of a is :"<<a<<endl;

     a=7;   // error acquire because consatnt variable available
     cout<<"the value of a is :"<<a<<endl;
     
*/

     // manipulators 
/*
     int a=12,b=923,c=7655;

     cout<<"the value of a is :"<<a<<endl;
     cout<<"the value of b is :"<<b<<endl;
     cout<<"the value of c is :"<<c<<endl;

     cout<<"the value of a is :"<<setw(4)<<a<<endl;
     cout<<"the value of b is :"<<setw(4)<<b<<endl;
     cout<<"the value of c is :"<<setw(4)<<c<<endl;


*/
    //  oerators precedence

    int a=3,b=4;
    // c=(a*5)+b;
   int c=(((a*5)+b)-45);
    cout<<c;



return 0;
}