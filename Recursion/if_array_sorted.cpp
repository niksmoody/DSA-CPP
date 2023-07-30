#include<iostream>
using namespace std;

bool ifSort(int n, int arr[]){
    if(n==1)
    return true;
    
    bool restArr = ifSort(n-1, arr+1);
    return (arr[0]<arr[1] && restArr);
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<ifSort(n, arr);
    
    return 0;
}