#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter sizeof fruits array: ";
    cin>>n;

    string fruits[n];
    cout<<"Enter the elements: "<<endl;
    
    for(int i=0; i<n; i++)
    {
        cin>>fruits[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<fruits[i]<<endl;
    }    
    return 0;
}