#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    int sum=0;
    int originaln = n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }

    if(sum == originaln){
        cout<<"Armstrong num";
    }

    else{
        cout<<"Non-Armstrong num";
    }
    
    return 0;
}