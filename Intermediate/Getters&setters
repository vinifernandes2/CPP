#include <iostream>
using namespace std;

class Moovie{
    private:
        string rating;

    public:
        string title;
        string directing;

        Moovie(string aTitle, string aDirecting, string aRating){
            title = aTitle;
            directing = aDirecting;
            setRating(aRating);
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};

int main(){
    Moovie avengers("End Game", "Marvel", "PG-13");

    cout << avengers.getRating();

    return 0;
}
