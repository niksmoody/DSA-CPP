#include<iostream>
using namespace std;

int main(){
	long long int D, OC, OF, OD, CS, CB, CM, CD;
    long long int totalOnline=0, totalClassic=0;
	cin>>D;
    cin>>OC>>OF>>OD;
    cin>>CS>>CB>>CM>>CD;

    totalOnline= OC+((D-OF)*OD);

    totalClassic= CB+(((D/CS)*CM)+(D*CD));

    cout<<"Online: "<<totalOnline<<endl<<"Classic: "<<totalClassic<<endl;
    
    if(totalOnline==totalClassic || totalOnline<totalClassic){
        cout<<"Online Taxi";
    }
    else{
        cout<<"Classic Taxi";
    }
	return 0;
}