#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Arrya size: ";
    cin>>n;
    int arr[n];
    
    cout<<"Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            maxSum = max(sum, maxSum);
        }
    }
    
    cout<<maxSum;

    return 0;
}


//Optimised Approach
// int sumArr[n+1];
// sumArr[0] = arr[0];

// for(int i=0; i<n; i++)
// {
//     sumArr[i+1] = sumArr[i] + arr[i];
// }

// int maxSum = INT_MIN;


// }