#include<iostream>
using namespace std;

void fib(int num)
{
    int t1 = 0, t2 = 1, t3;
    
    for(int i=1; i<=num; i++)
    {
        cout<<t1<<endl;
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return;
}


int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    fib(n);
}