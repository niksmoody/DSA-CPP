#include<iostream>
using namespace std;

int OtD(int num)
{
    int x = 1, sum = 0;
    while(num>0)
    {
        int lastdigit = num % 10;
        sum += lastdigit * x;
        x *= 8;
        num /= 10;
    }

    return sum;
}


int main()
{
    int n;
    cout << "Enter octal num: ";
    cin >> n;

    cout << OtD(n);
    
    return 0;
}