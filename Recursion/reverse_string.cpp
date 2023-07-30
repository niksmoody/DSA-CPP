#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){ //base case
        return;
    }

    string restOfString = s.substr(1);
    reverse(restOfString);
    cout<<s[0];
}


int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;
    reverse(name);
    
    return 0;
}