#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int addNumbers(int num)
{
    int sum = 0;
    for(int i=1; i<=num; i++){
        sum += i;
    }
    
    return sum;
}


int main()
{
    int n;
    cout<<"Enter limit: ";
    cin>>n;

    cout<<addNumbers(n);
    
    return 0;
}