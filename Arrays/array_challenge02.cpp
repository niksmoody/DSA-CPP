#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<size; i++)
    {
        int sum = 0;
        for(int j=i; j<size; j++)
        {
            sum += array[j];
            cout<<sum<<" ";
        }
    }
    
    return 0;
}