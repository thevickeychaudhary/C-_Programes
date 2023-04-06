#include<iostream>
using namespace std;

//function prototype
//function name(arguments)
// int sum(inta,int) -non acceptable
// int sum(int,int)- acceptable
int sum(int a,int b);  // yh identity krta h ki neeche function h 
//void g(void); void here optional in c++ programmingng
void g();
int main()
{
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;4;
    cout<<"the sum is :"<<sum(num1,num2)<<endl;// here num1 and num2 actul parameter
    g();
    return 0;
}
int sum(int a,int b)
{  // here a and b is a formal parameter
    
int c=a+b;// formal parameter a,b will betakes valus actual parameters num1 and num2
return c;
} 
void g()
{
cout<<"\nhello,good morning";
}


