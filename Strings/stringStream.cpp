#include <iostream>
#include<sstream>
#include<vector>
using namespace std;

vector <int> parse(string str){
    vector<int> out;
    stringstream ss(str);
    char ch;
    int temp;

    while(ss>>temp){
        out.push_back(temp);
        ss>>ch;
    }
    
    return out;
}

int main() {
    //by normal method
    // string s1;
    // cin>>s1;
    // stringstream ss(s1);
    // char ch1, ch2;
    // int a,b,c;
    // ss>>a>>ch1>>b>>ch2>>c;
    // cout<<a<<endl<<b<<endl<<c<<endl;
    // cout<<ch2<<endl<<ch2;
    // return 0;

    //by vector method
    string str;
    cin>>str;
    vector<int> integers = parse(str);
    for(int i=0; i<integers.size(); i++){
        cout<<integers[i]<<endl;
    }
    return 0;
}