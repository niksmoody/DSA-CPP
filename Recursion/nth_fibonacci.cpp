#include<iostream>
using namespace std;

int fibo(int pos){
    if(pos==0 || pos==1){   //base case
        return pos;
    }
    
    // if(pos==1){
    //     return 1;
    // }
    
    
    // int ans = fibo(pos-1) + fibo(pos-2);
    // return ans;
    return fibo(pos-1) + fibo(pos-2);
}

int main(){
    int p;
    cout<<"Enter position: ";
    cin>>p;
    
    cout<<fibo(p);
    
    return 0;
}