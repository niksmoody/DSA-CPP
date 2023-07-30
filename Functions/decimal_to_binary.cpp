#include<iostream>
using namespace std;

int DtB(int num)
{
    int ans = 0, remainder;
    int i = 1;

    while(num!=0)
    {
        remainder = num % 2;
        num = num/2;
        ans = ans + remainder * i;
        i *= 10;
    }

    return ans;
}


int main()
{
    int n;
    cout<<"Enter decimal num: ";
    cin>>n;

    cout<<DtB(n)<<endl;
    
    return 0;
}
