#include<bits/stdc++.h>
using namespace std;

// fixed size array search
int search(int arr[],int x,int n){      
    for(int i=0;i<n;i++){
        if(arr[i]==x){
               return i;
        }
        }
    return -1;
}
// dynamic size array search (vector)

int vecSearch(vector<int>vec,int x){
    auto it=find(vec.begin(),vec.end(),x);
    if(it!=vec.end()){
        return it-vec.begin();
    }
    return-1;
}



int main(){
    int arr[]={20,30,10,100,40};
    int x=10;
    cout<<"search via fixed size array -> "<<search(arr,x,5)<<endl;

    vector<int>vec ={20,30,10,100,40};
    cout<<"search via dynamic size array-> "<<vecSearch(vec,x);
}


