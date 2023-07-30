#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    for(int i=1; i<=n; i++){           //for upper half of diamond 
        for(int j=1; j<=(n*2)-1; j++){  //enter 2 then 3 columns; 3-5; 4-7; ...
            if(j<=n-i || j>=n+i){
                cout<<" "; 
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }


    for(int i=n; i>=1; i--){           //for lower half of diamond
        for(int j=1; j<=(n*2)-1; j++){
            if(j<=n-i || j>=n+i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0;
}