#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Elements: ";
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    bool flag = 0; 
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[j] == arr[i])
            {
                cout<<i;
                flag = 1;
                return 0;
            }
        }
    }

    if(flag==0)
    {
        cout<<"No repeating element";
    }
        
    return 0;
}