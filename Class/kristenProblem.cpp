#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

class Student{
    public:
    int scores[5];
    public:
    void input(){
        for(int i=0; i<5; i++){
            cin>>scores[i];
        }
    }
    
    int total(){
        int count=0;
        for(int i=0; i<5; i++){
            count+=scores[i];
        }
        return count;
    }
};

int main() {
    int num; //no.of students
    cin>>num;
    Student *s=new Student[num];
    for(int i=0; i<num; i++){
        s[i].input();
    }
    
    int kris_score=s[0].total();
    
    int count=0;
    for(int i=1; i<num; i++){
        int total=s[i].total();
        if(total>kris_score){
            count++;
        }
    }
    cout<<count;
    return 0;
}