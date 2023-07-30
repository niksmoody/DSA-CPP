#include<iostream>
using namespace std;

int main()
{
    int n, reverse=0, lastdig;
    cout<<"Enter the num: ";
    cin>>n;

    while(n>0)
    {
        lastdig = n%10;
        reverse = reverse*10 + lastdig;
        n = n/10;  
    }

    cout<<reverse;
    
    return 0;
}