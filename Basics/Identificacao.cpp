#include <iostream>

using namespace std;

int main()
{
    int p1, p2, p3, p4, p5;

    cin >> p1 >> p2 >> p3 >> p4 >> p5;

    if(p1 == 0 && p2 == 1 && p3 == 0 && p4 == 1 && p5 == 1){
        cout << "coruja" << endl;
    }else if(p1 == 0 && p2 == 0 && p3 == 0 && p4 == 1 && p5 == 0){
        cout << "pardal" << endl;
    }else if(p1 == 0 && p2 == 0 && p3 == 1 && p4 == 1 && p5 == 0){
        cout << "galinha" << endl;
    }else if(p1 == 0 && p2 == 1 && p3 == 0 && p4 == 0 && p5 == 0){
        cout << "ema" << endl;
    }else if(p1 == 0 && p2 == 1 && p3 == 0 && p4 == 1 && p5 == 0){
        cout << "falcão" << endl;
    }else if(p1 == 1 && p2 == 0 && p3 == 0 && p4 == 1 && p5 == 0){
        cout << "pato" << endl;
    }else if(p1 == 1 && p2 == 0 && p3 == 0 && p4 == 1 && p5 == 0){
        cout << "pato" << endl;
    }else if(p1 == 1 && p2 == 1 && p3 == 0 && p4 == 0 && p5 == 0){
        cout << "pinguim" << endl;
    }else if(p1 == 1 && p2 == 1 && p3 == 0 && p4 == 1 && p5 == 0){
        cout << "gaivota" << endl;
    }
    else if(p1 == 1 && p2 == 1 && p3 == 0 && p4 == 1 && p5 == 1){
        cout << "garça" << endl;
    }else if(p1 == 0 && p2 == 0 && p3 == 0 && p4 == 0 && p5 == 0){
        cout << "avestruz" << endl;
    }
    return 0;
}
