#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int a[n];

    cout<<"Elements: ";
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    int sum;
    cout<<"Enter sum: ";
    cin>>sum;

    for(int i=1; i<=n; i++)
    {
        int currSum=0;
        for(int j=i; j<=n; j++)
        {
            currSum += a[j];
            if(currSum==sum)
            {
                cout<<i<<" "<<j;
                return 0;
            } 
        }
    }

    return 0;
}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, sum;
//     cout<<"Array size: ";
//     cin>>n;
//     int a[n];

//     cout<<"Elements: ";
//     for(int i=1; i<=n; i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"Enter sum: ";
//     cin>>sum;

//     int i=1, j=1, st= -1, end= -1, curr_sum=0;

//     while(j<n && a[j]+curr_sum <= sum)
//     {
//         curr_sum += a[j];
//         j++;
//     }

//     if(curr_sum == sum)
//     {
//         cout<<i<<" "<<j-1;
//         return 0;
//     }

//     while(j<n)
//     {
//         curr_sum += a[j];
//         while(curr_sum > sum)
//         {
//             curr_sum -= a[i];
//             i++;
//         }

//         if(curr_sum == sum)
//         {
//             st = i;
//             end = j;
//             break;
//         }

//         j++;
//     }

//     cout<< st << " " << end;
    
//     return 0;
// }