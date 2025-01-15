#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    char ope;

    cin >> n1 >> n2;
    cin >> ope;

    switch(ope){
        case '+':
            cout << n1+n2;
            break;
        case '-':
            cout << n1-n2;
            break;
        case '*':
            cout << n1*n2;
            break;
        case '/':
            cout << n1/n2;
            break;
        default :
        cout << "Operador nao encontrado"; 
    }

    return 0;
}
