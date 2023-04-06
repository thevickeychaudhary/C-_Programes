#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{10,20,30};
    auto it=arr.begin()+1;
    auto iter=arr.insert(it,6);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    } 
     return 0;

}