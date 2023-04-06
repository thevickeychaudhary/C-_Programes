#include<iostream>
using namespace std;

class employee
{
    private:
    int a;
    int b;
    public:
    int timetable;
    int carparking;
    void setdata(int salary, int details);   //declaration
    void getdata()
    {
        cout<<"the salary of employee is "<<a<<endl;
        cout<<"the details of employee is "<<b<<endl;
        cout<<"the timetable of employee is "<<timetable<<endl;
        cout<<"the car parking of employee is "<<carparking<<endl;
    }
};
void employee :: setdata(int salary, int details)
{
    a=salary;
    b=details;
}
int main()
{
employee vicky;
vicky.timetable=9.00;
vicky.carparking=67;
vicky.setdata(23000,656);
vicky.getdata();
return 0;
}