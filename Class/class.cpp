#include<iostream>
using namespace std;

class Movie{
    private:
    string watched;
    
    public:
    string title;
    string actor;
    int rating;

    Movie(string utitle, string uactor, int urating, string uwatched){
        title = utitle;
        actor = uactor;
        rating = urating;
        setWatched(uwatched);
    }

    void setWatched(string uwatched){
        if(uwatched=="yes" || uwatched=="no"){
            watched = uwatched;
        }
        else{
            cout<<"You fool";
        }
    }

    string getWatched(){
        return watched;
    }
};

int main(){
    Movie ironman("Ironman", "tony", 8, "blah");
    ironman.setWatched("no");
    cout<<ironman.getWatched();
    // cout<<ironman.getWatched();
    return 0;
}