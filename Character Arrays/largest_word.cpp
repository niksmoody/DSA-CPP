#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of letters: ";
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"Enter sentence: ";
    cin.getline(arr, n);
    cin.ignore();
    
    int i=0, currLen=0, maxLen=0;
    
    while(1){
        if(arr[i] == ' ' || arr[i]== '\0'){
            if(currLen > maxLen){
                maxLen = currLen;
            }

            currLen = 0;
        }

        else{
            currLen++;
        }
        
        if(arr[i] == '\0'){
            break;
        }
    
    i++;
    }
    
    cout<<maxLen;
    return 0;
}