#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of words: ";
    cin>>n;

    char word[n+1];
    cout<<"Enter word: ";
    cin>>word;

    bool check = true;
    
    for(int i=0; i<n; i++){
        if(word[i] != word[n-i-1]){
            check = 0;
            break;
        }
    }

    if(check == true){
        cout<<"Palindrome";
    }

    else{
        cout<<"Not Palindrome";
    }
    
    return 0;
}