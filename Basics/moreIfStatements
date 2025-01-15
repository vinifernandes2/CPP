#include <iostream>

using namespace std;

int getMax(int Num1, int Num2, int Num3){
    int result;

    if(Num1 > Num2 && Num1 > Num3){
        result = Num1;
    }else if(Num2 > Num1 && Num2 > Num3){
        result = Num2;
    }else{
        result = Num3;
    }
    return result;
}

// "==" é comparação
// "=" é atribuição (assignment)

int main(){
    int num1, num2, num3;

    cout << "Enter two numbers: " << endl;

    cin >> num1 >> num2 >> num3;

    cout << getMax(num1, num2, num3);

    return 0;
}
