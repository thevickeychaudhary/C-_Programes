/*
#include<iostream>
using namespace std;
// call by value
void swap(int a, int b){// temp  a  b
    int temp=a;  // 4   4   5
    a=b;         // 4   5   5
    b=temp;     // 4    5   4
}
int main()
{
    int x=4,y=5;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

return 0;
}
*/
/*
#include<iostream>
using namespace std;
// call by pointers
void swap(int *a, int *b){//   temp  a  b
int temp=*a;              //   4     4  5 
*a=*b;                    //   4    5  5
*b=temp;                  //   4    5  4

}
int main()
{
    int x=4,y=5;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swappointer(&x,&y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;


return 0;
}
*/

#include<iostream>
using namespace std;
void swapreference(int &a, int &b){//   temp  a  b
int temp=a;              //   4     4  5 
a=b;                    //   4    5  5
b=temp;                  //   4    5  4
}
int main()
{
int x=4,y=5;
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapreference(x,y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

return 0;
}