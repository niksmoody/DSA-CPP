#include<iostream>
#include<math.h>
using namespace std;

void maxTillElement(int size, int array[])
{
    int mx = 0;
    
    for(int i=0; i<size; i++)
    {
        //*WRONG LOGIC*
        // if(array[i]>array[i-1])
        // {
        //     max = array[i];
        // }

        mx = max(mx, array[i]);
        cout<<mx<<" ";
    }
}



int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int array[size];

    cout<<"Enter elements of array: ";
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    maxTillElement(size, array);

    return 0;
}