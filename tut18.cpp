#include<iostream>
using namespace std;
// recursion and recursive function

int factorial(int n){
    if(n<=1){
    return 1;
}
return n*factorial(n-1);
}            // 4*factorial(4-1)
             //4*3*factorial(3-1)
             //4*3*2*factorial(2-1)
             //4*3*2*1
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
return 0;
}

/*
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main()
{
    int a;
    cout<<"enter a number ";
    cin>>a;
    cout<<"the term is fibonacci sequence at the position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}
*/