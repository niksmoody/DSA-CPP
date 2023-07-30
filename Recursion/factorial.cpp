#include<iostream>
using namespace std;

int fact(int num){
    if(num==1){
        return 1;
    }
    
    // int prevFact = fact(num-1);
    // return num * prevFact;
    return num * (fact(num-1));
}

int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;

    cout<<fact(n);
    
    return 0;
}