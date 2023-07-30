#include<iostream>
using namespace std;

void linearSearch(int n, int arr[], int key)
{
    bool exists = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Element found at the "<<i<<"th position"<<endl;
            exists = true;
            break;
        }
    }

    if(exists == 0)
        {
            cout<<"Element not found!"<<endl;
        }
}


int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to be found: ";
    cin>>key;

    linearSearch(n, arr, key);

    // bool flag = 0;
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i] == key)
    //     {
    //         cout<<"Element found at the "<<i<<"th position"<<endl;
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag == 0)
    //     {
    //         cout<<"Element not found!"<<endl;
    //     }

    return 0;
}