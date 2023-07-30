#include<iostream>
using namespace std;

void dec(int num){
    if(num==0){
        return;
    }
    
    cout<<num<<endl;
    dec(num-1);    
}

void inc(int num){
    if(num==0)
        return;
    
    inc(num-1);
    cout<<num<<endl;
}

int main(){
  int n;
  cout<<"Enter num: ";
  cin>>n;

//   dec(n);
  inc(n);

  return 0;
}