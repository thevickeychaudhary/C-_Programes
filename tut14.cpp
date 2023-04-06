#include<iostream>
using namespace std;

/*
struct employee
{
    int eid;  // 4
    char favchar;//1
    float salary;//4

};

int main()
{
    struct employee harry;
    harry.eid=1;
    harry.favchar='c';
    harry.salary=1200000;

    cout<<"the value is :"<<harry.eid<<endl;
    cout<<"the value is :"<<harry.favchar<<endl;
    cout<<"the value is :"<<harry.salary<<endl;
*/

/*
 typedef struct employee
{
    int eid;  // 4
    char favchar;//1
    float salary;//4

}ep;

int main()
{
    ep harry;
    struct employee shubham;
    struct employee rohan;
    harry.eid=1;
    harry.favchar='c';
    harry.salary=1200000;

    cout<<"the value is :"<<harry.eid<<endl;
    cout<<"the value is :"<<harry.favchar<<endl;
    cout<<"the value is :"<<harry.salary<<endl;
*/
/*
union money{
    int rice;
    char car;
    float pounds;

};
int main(){
union money m1;
m1.rice=34;
cout<<m1.rice<<endl;
*/

int main(){

enum meal {breakfast,launch,dinner};
meal m1=launch;
cout<<m1<<endl;

return 0;
}