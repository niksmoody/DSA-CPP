#include<iostream>
using namespace std;

int add(int a, int b){
    // int sum;
    // sum = a+b;
    // return sum;
    return(a+b);
}


int main(){
    int a, b;
    cin>>a>>b;
    cout<<a<<" + "<<b<<" = "<<add(a, b)<<endl;

    cout<<add(10, 30)<<endl;
}