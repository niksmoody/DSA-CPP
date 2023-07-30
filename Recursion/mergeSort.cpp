#include<iostream>
using namespace std;


//ACTUAL CODE for one array
void merge(int A[], int B[], int low, int mid, int high){
    int i = low, j = mid, k = low;

    while(i<mid && j<high){
        if(A[i] < A[j]){
            B[k] = A[i];
            k++; i++;
        }

        else{
            B[k] = A[j];
            k++; j++;
        }
    }

    while(i<=mid){
        B[k] = A[i];
        k++; i++;
    }

    while(j<=high){
        B[k] = A[j];
        k++; j++;
    }

    for(int i=low; i<high; i++){
        A[i] = B[j];
    }

    for(int i=low; i<high; i++){
        cout<<A[i];
    }
}

//for three different arrays - to understand
// void merge(int A[], int B[], int C[], int m, int n){
//     int i, j, k;
//     i=j=k=0;

//     while(i<m && j<n){
//         if(A[i] < B[j]){
//             C[k] = A[i];
//             k++; i++;
//         }

//         else{
//             C[k] = B[j];
//             k++; j++;
//         }
//     }

//     while(i<m){
//         C[k] = A[i];
//         k++; i++;
//     }

//     while(j<n){
//         C[k] = B[j];
//         k++; j++;
//     }
// }

int main(){
    int high;
    cout<<"Enter no. of elements: ";
    cin>>high;

    int A[high];
    cout<<"Enter elements: ";
    for(int i=0; i<high; i++){
        cin>>A[i];
    }
    
    int B[high];
    for(int i=0; i<high; i++){
        B[i]=0;
    }

    merge(A, B, 0, 3, 7);
    return 0;
}