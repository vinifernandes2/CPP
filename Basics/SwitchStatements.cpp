#include <iostream>
using namespace std;


string getDayOfWeek (int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;

    case 1:
        dayName = "Monday";
        break;

    case 2:
        dayName = "Tuesday";
        break;

    case 3:
        dayName = "Wednesday";
        break;

    case 4:
        dayName = "Thursday";
        break;

    case 5:
        dayName = "Friday";
        break;

    case 6:
        dayName = "Saturday";
        break;

    default:
        dayName = "Invalid day number";
    }

    return dayName;
}


int main(){
    int dayNumber;

    cout << "Enter a number of the day: ";
    cin >> dayNumber;

    cout << getDayOfWeek(dayNumber);


    return 0;
}
