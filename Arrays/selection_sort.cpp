#include<iostream>
using namespace std;

void selectionSort(int n, int arr[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"Ascending Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"Descending Sorted array: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

    // return 0;
}


int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectionSort(n, arr);
    return 0;
}