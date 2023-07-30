#include<iostream>
using namespace std;

int fact(int num)
{
    int fact = 1;
    for(int i=2; i<=num; i++){
        fact *= i; 
    }

    return fact;
}


int main()
{
    //Print factorial
    int a;
    cout<<"Enter a num: ";
    cin>>a;
    cout<<"The factorial is "<<fact(a);

   
    //Print Combination(nCr)
    int n, r, ans;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    ans = (fact(n))/(fact(n-r) * fact(r));
    cout<<ans;


    //Pascal's triangle
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i; j++){
            cout<<" ";
        }
        
        for(int j=0; j<=i; j++){
            cout<<(fact(i))/(fact(i-j) * fact(j))<<" ";
        }

        cout<<endl;
    }
    return 0;
}

