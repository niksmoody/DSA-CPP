#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    char gender;

    student(){
        cout<<"Default constructor"<<endl;
    }

    student(string n, int a, char g){
        cout<<"Parameterised Constructor"<<endl;
        name=n;
        age=a;
        gender=g;
        // cout<<name<<", "<<age<<", "<<gender<<endl;
    }

    student(student &b){
        cout<<"Copy constructor"<<endl;
        name=b.name;
        age=b.age;
        gender=b.gender;
        // cout<<name<<", "<<age<<", "<<gender<<endl;
    }
    

    // ~student(){
    //     cout<<"Destructor called"<<endl;
    // }

    bool operator ==(student a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
    
    void printInfo(){
        // cout<<name<<", "<<age<<", "<<gender<<endl;
    }
};

int main(){
    // student a;
    // a.name="Nikita";
    // a.age=21;
    // a.gender='F';

    // student b;
    // b.name="Samar";
    // b.age=20;
    // b.gender='M';

    // student stu_arr[2];
    // for(int i=0; i<2; i++){
    //     cout<<"Name= ";
    //     cin>>stu_arr[i].name;
    //     cout<<"Age= ";
    //     cin>>stu_arr[i].age;
    //     cout<<"Gender= ";
    //     cin>>stu_arr[i].gender;
    // }

    // for(int i=0; i<2; i++){
    //     stu_arr[i].printInfo();
    // }

    student b("Nikita", 21, 'F');
    student c(b);
    student d("Samar", 20, 'M');
    student e("Shreya", 20, 'F');
    cout<<endl;

    (d==e) ? cout<<"same" : cout<<"not same";
    return 0;
}