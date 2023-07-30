#include<iostream>
using namespace std;

int main(){
    int n, q, s=0; //no of arrays + queries
    cin>>n>>q;
    int *loc[n]; //array of locations of arrays
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        loc[s]=new int[num];
        for(int i=0; i<num; i++){
            cin>>loc[s][i];
        }
        s++;
    }

    for(int i=0; i<q; i++){
        int arno, idx;
        cin>>arno>>idx;
        cout<<loc[arno][idx];
    }
    return 0;
}