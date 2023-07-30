#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    
    bool check[n];
    for(int i=0; i<n; i++)
    {
        check[i] = false;
    }

    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            check[arr[i]] = true;
        }

        else
        {
            check[arr[i]] = false;
        }
    }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<check[i]<<" ";
    // }

    for(int j=0; j<n; j++)
    {
        if(check[j] == false)
        {
            cout<<j;
            return 0;
        }
    }

    return 0;
}