#include <iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	int arr[num];

	for(int i=1; i<=num; i++){
		cin>>arr[i];

		if(i==num){
			if(arr[i]%10==0){
				cout<<"Yes";
			}
			else{
				cout<<"No";
			}
		}
	}
}