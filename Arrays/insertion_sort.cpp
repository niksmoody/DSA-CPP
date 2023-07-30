#include<iostream>
using namespace std;

void insertionSort(int size, int array[])
{
    for(int i=1; i<size; i++)
    {
        int current = array[i];
        int j = i-1;
        
        while(array[j] > current && j>=0)
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = current;
    }

    cout<<"Sorted array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
}


int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];

    cout<<"Enter elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    insertionSort(size, array);
    
    return 0;
}