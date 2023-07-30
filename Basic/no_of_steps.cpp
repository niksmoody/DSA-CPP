#include <iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	int arr1[num];
	int arr2[num];
	
	for(int i=0; i<num; i++){
		cin>>arr1[i];
	}

	for(int i=0; i<num; i++){
		cin>>arr2[i];
	}

    int minSteps=0;
    while(true){
        int maxVal=arr1[0];
        int maxIndex=0;

        for(int i=1; i<num; i++){
            if(arr1[1]>maxVal){
                maxVal=arr1[i];
                maxIndex=i;
            }
        }

        bool allEqual=true;
        for(int i=0; i<num; i++){
            if(arr1[i] != arr1[0]){
                allEqual=false;
                break;
            }
        }
        
        if(allEqual){
            break;
        }

        for(int i=0; i<num; i++){
            if(arr1[i] >= arr2[maxIndex]){
                arr1[i] = arr1[i]-arr2[maxIndex];
            }
        }

        minSteps++;
    }

    cout<<minSteps<<endl;
    return 0;
}