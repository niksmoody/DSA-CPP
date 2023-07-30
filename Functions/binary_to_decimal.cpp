#include<iostream>
using namespace std;

int BtD(int num)
{
    int x = 1, sum = 0;
    while(num>0)
    {
        int lastdigit = num % 10;
        sum += lastdigit * x;
        x *= 2;
        num /= 10;
    }

    return sum;
}


int main()
{
    int n;
    cout<<"Enter binary num: ";
    cin>>n;

    cout<<BtD(n);
    
    return 0;
}