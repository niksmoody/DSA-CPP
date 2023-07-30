#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int minNo= INT_MAX;
    int maxNo= INT_MIN;

    for(int i=0; i<n; i++)
    {
        minNo = min(arr[i], minNo);
        
        // if(arr[i]<min)
        // {
        //     min = arr[i];
        // }

        maxNo = max(arr[i], maxNo);
        
        // if(arr[i]>max)
        // {
        //     max = arr[i];
        // }
    }

    cout<<"Min: "<<minNo<<endl;
    cout<<"Max: "<<maxNo<<endl;
    
    return 0;
}