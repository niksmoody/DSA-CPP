#include<iostream>
using namespace std;

int DtO(int num)
{
    int ans = 0, remainder;
    int i = 1;
    
    while(num!=0)
    {
        remainder = num % 8;
        num = num/8;
        ans = ans + remainder * i;
        i *= 10;
    }

    return ans;
}


int main()
{
    int n;
    cout<<"Enter a decimal num: ";
    cin>>n;

    cout<<DtO(n);
    
    return 0;
}