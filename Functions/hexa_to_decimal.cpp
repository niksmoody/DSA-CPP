#include<iostream>
using namespace std;

int HtD(string num)
{
    int x = 1, ans = 0;
    int s = num.size();
    
    for(int i=s-1; i>=0; i--)
    {
        if(num[i] >= '0' && num[i] <= '9'){
            ans += x * (num[i] - '0');
        }

        else if(num[i] >= 'A' && num[i] <= 'F'){
            ans += x * (num[i] - 'A' + 10);
        }

        x *= 16;
    }

    return ans;
}


int main()
{
    string n;
    cout<<"Enter hex num: ";
    cin>>n;
    
    cout<<HtD(n)<<endl;
    
    return 0;
}