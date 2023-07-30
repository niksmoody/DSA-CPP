#include<iostream>
using namespace std;

string DtH(int num)
{
    int x = 1;
    string ans = " ";
    while(x <= num)
    {
        x*= 16;
    }

    x /= 16;

    while(x > 0)
    {
        int lastDigit = num/x;
        num -= lastDigit * x;
        x /= 16;

        if(lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }

        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}


int main()
{
    int n;
    cout<<"Enter a decimal num: ";
    cin>>n;

    cout<<DtH(n);
    
    return 0;
}