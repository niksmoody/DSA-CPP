#include<iostream>
using namespace std;

int sum(int num){
    if(num==0){
        return 0;
    }

    int prevSum = sum(num-1);
    return num + prevSum;
}

int main(){
    int n;
    cout<<"Enter num: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}