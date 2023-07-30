#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string num = "54987592";
    sort(num.begin(), num.end(), greater<int>());
    cout<<num<<endl;
    
    return 0;
}