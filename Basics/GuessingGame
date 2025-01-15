#include <iostream>
using namespace std;

int main(){
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuess = false;

    while(guess != secretNumber && !outOfGuess){
        if(guessCount < guessLimit){
            cout << "Enter a number: ";
            cin >> guess;
            guessCount++;
        }else{
            outOfGuess = true;
        }
    }

    if(outOfGuess){
        cout << "You Lost";
    }else{
        cout << "You Win!!";
    }
    return 0;
}
