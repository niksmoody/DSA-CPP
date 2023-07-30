#include <iostream>
#include<cmath>
using namespace std;

int main(){
    long long num, prod=1, temp;
    cin>>num;
	int arr[num];

    for(int i=1; i<=num; i++){
        cin>>arr[i];
        prod=(prod*arr[i]) % 1000000007;
    }

    cout<<prod;
    return 0;
}