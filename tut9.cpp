#include<iostream>
using namespace std;

// this is tutorial 9
//     1. selection control control: adder if else

int main(){
int age ;
cout<<"enter your age :"<<endl;
cin>>age;
/*
if((age<18) && (age>0))
{
    cout<<"you can not come in the party"<<endl;
}
else if (age==18)
{
    cout<<"you are a kid and you get a pass for come to party cannot:"<<endl;
}
else if(age<=0)
cout<<"you are not born yet"<<endl;
else
cout<<"you come in the party"<<endl;
    
*/

// selection control : switch case

switch (age)
{
    case 18:
         cout<<" girl can marriage"<<endl;
          break;
        
    case 22:
    
        cout<<"boy can marriage"<<endl;
        break;
    
    default :
    cout<<"both can't marriage"<<endl;

}

     
cout<< "switch case is done";


}