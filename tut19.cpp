#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function with 2 arguments ";
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with 3 arguments ";
    return a+b+c;
}
// calculate the volume of a cylinder
int volume (double r,int h){
    return (3.14*r*r*h);
}
// calculate the volume of cube
int volume(int a){
    return a*a*a;
}
// rectangulat box
int volume(int l, int b,int h){
    return (l*b*h);
}
int main()
{
cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
cout<<"the sum of 3,6 and 7 is "<<sum(3,6,7)<<endl;
cout<<"the volume of a cyliner is "<<volume(3,6)<<endl;
cout<<"the volume of cube is "<<volume(3)<<endl;
cout<<"the area of rectangular is "<<volume(3,6,7);
return 0;
}