#include<iostream>
using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    
    int prevProd = power(n, p-1);
    return n * prevProd;
}

int main(){
    int n, p;
    cout<<"Enter num and pow: ";
    cin>>n>>p;
    cout<<power(n, p);
    
    return 0;
}