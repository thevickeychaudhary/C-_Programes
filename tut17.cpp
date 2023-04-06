/* inline function
#include<iostream>
using namespace std;
inline int product (int a,int b){
    return a*b;
}
int main()
{
int a,b;
cout<<"enter the values of a and b"<<endl;
cin>>a>>b;
cout<<"the product of a and b is "<<product(a,b)<<endl;
return 0;
} */

// default argument 
#include<iostream>
using namespace std;
float moneyreceived(int currentmoney, float factor=1.04){
return currentmoney*factor;
  /*int strlen ( const char *p){
  constant argument = its value donot change and modified
}*/
}
int main()
{
int money=10000;
cout<<"if you have "<<money<<" rs in your bank account , you will receive "<<moneyreceived(money)<<endl;
cout<<"for vip : if you have "<<money<<" rs in your bank account , you will receive "<<moneyreceived(money,1.1)<<endl;
return 0;
}