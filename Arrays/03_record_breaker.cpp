#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int mx = 0;
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }

        mx = max(mx, arr[i]);
    }

    cout<<ans;
    
    return 0;
}