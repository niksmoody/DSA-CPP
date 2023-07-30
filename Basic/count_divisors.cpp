#include <iostream>
using namespace std;
int main() {
	int a, b, d;
	cin>>a>>b>>d;
    int num=0;

    for(int i=a; i<=b; i++){
        if(i%d==0){
            num++;
        }
    }
    cout<<num;
}