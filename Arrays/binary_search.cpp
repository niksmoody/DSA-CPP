#include<iostream>
using namespace std;

int binarySearch(int size, int array[], int key)
{
    int start=0, end=size, midTerm;

    while(start<end)
    {
        midTerm = (start + end)/2;

        if(key == array[midTerm])
        {
            return midTerm;
        }

        else if(key < array[midTerm])
        {
            end = midTerm-1;
        }

        else
        {
            start = midTerm + 1;
        }
    }
}


int main()
{
    int s;
    cout<<"Enter the size of array: ";
    cin>>s;

    int array[s];
    cout<<"Enter the elements: ";
    for(int i=0; i<s; i++)
    {
        cin>>array[i];
    }

    int key;
    cout<<"Enter the element to be found: ";
    cin>>key;

    cout<<binarySearch(s, array, key);

    return 0;
}