#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int num)
{
    int i;
    for(i=2; i<num; i++)
    {
        if(num%i==0){
            break; 
        }
    }
    
    if(i==num)
    {
        cout<<num<<endl;
    }
}


int main()
{
    int a, b;
    cout<<"Enter two nums: "<<endl;
    cin>>a>>b;

    for(int num=a; num<=b; num++){
        isPrime(num);
        }
    
    return 0;
}