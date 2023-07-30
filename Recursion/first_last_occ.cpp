#include<iostream>
using namespace std;

int firstOcc(int n, int arr[], int i, int key){
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    
    return firstOcc(n, arr, i+1, key);  
} 

// int lastOcc(int n, int arr[], int i, int key){
//     if(i==0){
//         return -1;
//     }
    
//     if(arr[i]==key){
//         return i;
//     }

//     return lastOcc(n, arr, i-1, key);
// }

int lastOcc(int n, int arr[], int i, int key){
    if(i==n){
        return -1;
    }
    
    int restArr = lastOcc(n, arr, i+1, key);
    if(restArr!=-1){
        return restArr;
    }

    if(arr[i]==key){
        return i;
    }

    return -1;
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

    int key;
    cout<<"Enter element: ";
    cin>>key;

    cout<<"First Occurance: "<<firstOcc(n, arr, 0, key)<<endl;
    cout<<"Last Occurance: "<<lastOcc(n, arr, 0, key)<<endl;
    
    return 0;
}