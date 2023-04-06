#include<iostream>
using namespace std;
int deleteEle(int arr[],int x, int n){
    int i=0;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
     }
     if(i==n){
        return n;
     }
     for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];

     }
     return n-1;

}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    int x=20;
    cout<<"array before deletation"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    n=deleteEle(arr,x,n);
    cout<<"array after deletation "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}