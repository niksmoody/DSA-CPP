#include<iostream>
using namespace std;

void bubbleSort(int size, int array[])
{
    int iteration = 1;
    while(iteration<size)
    {
        for(int i=0; i<size-iteration; i++)
        {
            if (array[i]>array[i+1])
            {
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }

        iteration++;
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bubbleSort(n, arr);
}