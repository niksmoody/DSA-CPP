#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter size of matrix: ";
    cin>>a>>b;
    int arr[a][b];

    cout<<"Enter elements: ";
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++) {
            cin>>arr[i][j];
        }
    }

    cout<<"The matrix is:"<<endl;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++){
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}