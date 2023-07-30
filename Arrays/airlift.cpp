#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int solve(int cap, int num, vector<int> weights){
    sort(weights.begin(), weights.end());
    int count=0;
    int sum=weights[0];
    cout<<sum<<" "<<cap;
    
    if(sum>cap){
            return -1;
    }
    
    for(int i=1; i<num; i++){        
        if(sum<cap){
            sum=sum+weights[i];
            count++;
        }
    }
    return count;
}

int main(){
    int cap; //weight of aircraft
    cout<<"Enter capacity: ";
    cin>>cap;
    
    int num; //no.of people
    cout<<"Enter number of people: ";
    cin>>num;
    
    vector<int> weights;
    cout<<"Enter weights: ";
    
    for(int i=0; i<num; i++){
        int w;
        cin>>w;
        weights.push_back(w);
    }
    cout<<solve(cap, num, weights);
    return 0;
}