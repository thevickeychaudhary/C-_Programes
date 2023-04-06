#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n=10;
    for(int i=0;i<n;i++)
    {
        v.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+7);
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;


}