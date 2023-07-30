// #include <iostream>
// using namespace std;
// int main() {
// 	string str;
// 	cin>>str;

//     int length=str.size();
//     for(int i=0; i<length; i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i] = str[i] + 32;
//         }
//         else if(str[i]>='a' && str[i]<='z'){
//             str[i] = str[i] - 32;
//         }
//     }
//     cout<<str;
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
	string str;
	cin>>str;

    int length=str.size();
    for(int i=0; i<length; i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    cout<<str;
    return 0;
}