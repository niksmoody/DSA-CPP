#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Press a button"<<endl;
    cin>>button;

    // if(button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }

    // else if(button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }

    // else if(button=='c')
    // {
    //     cout<<"Hola"<<endl;
    // }

    // else if(button=='d')
    // {
    //     cout<<"Konichiwa"<<endl;
    // }

    // else
    // {
    //     cout<<"I'm still learning"<<endl;
    // }

    switch(button)
    {
        case 'a':
        cout<<"Hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"Hola"<<endl;
        break;

        case 'd':
        cout<<"Konichiwa"<<endl;
        break;

        default:
        cout<<"I'm still learning"<<endl;
        break;
    }

    return 0;
}