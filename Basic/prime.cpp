#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the num: ";
    cin>>n;

    bool flag=0;
    
    for(int counter=2; counter<=sqrt(n); counter++){
        if(n%counter==0){
            cout<<"non-prime"<<endl;
            flag = 1;
            break;
        }        
    }

    if(flag==0){
        cout<<"prime";
    }

    return 0;



    // int factor = 0;
    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         factor++;
    //     }
    // }
    // if(factor == 2){
    //         cout<<"Prime";
    //     }

    //     else{
    //         cout<<"non prime";
    //     }

    //     return 0;
}