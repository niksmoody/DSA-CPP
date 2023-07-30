#include <iostream>
using namespace std;

int main()
{
    // for(int i=0; i<5; i++)
    // {
    //     cout<<"*   *   *   * \n";
    // }

    int row, col;
    cout << "Enter no. of rows and columns:";
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*  ";
        }

        cout << endl;
    }
}