#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter number of rows and columns: ";
    cin>>a>>b;
    int arr[a][b];

    //take array input
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }

    //spiral order print
    int row_s = 0, row_e = a-1, col_s = 0, col_e = b-1;

    while(row_s<=row_e && col_s<=col_e) {
        //for row start
        for(int col=col_s; col <= col_e; col++){
            cout<<arr[row_s][col]<<" ";
        }

        row_s++;

        //for column end
        for(int row=row_s; row<= row_e; row++){
            cout<<arr[row][col_e]<<" ";
        }

        col_e--;
        
        //for row end
        for(int col=col_e; col>=col_s; col--){
            cout<<arr[row_e][col]<<" ";
        }

        row_e--;

        //for column start
        for(int row=row_e; row>=row_s; row--){
            cout<<arr[row][col_s]<<" ";
        }

        col_s++;
    }
    
    return 0;
}