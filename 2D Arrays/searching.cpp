#include<iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout<<"Enter matrix size: ";
    cin>>a>>b;
    int arr[a][b];

    //input array
    cout<<"Enter elements"<<endl;
    for(int i=1; i<=a; i++) {
        cout<<"row "<<i<<": ";
        for(int j=1; j<=b; j++) {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter element to be found: ";
    cin>>x;

    //print array
    cout<<"Matrix is: "<<endl;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++) {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
    
    //search
    bool flag = false;
    for(int i=1; i<=a; i++) {
        for(int j=1; j<=b; j++) {
            
            if(arr[i][j] == x) {
                cout<<"Element found at "<<i<<","<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag == false) {
        cout<<"Element not found!";
    }
    
    return 0;
}