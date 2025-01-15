#include <iostream>

using namespace std;

class Data{

public:
int dia=1, mes=1, ano=1;

private:


};

int main(){

    Data *hoje=new Data();

    cin >> hoje->dia >> hoje->mes >> hoje->ano;
    cout << hoje->dia << "/" << hoje->mes << "/" << hoje->ano << endl;

    return 0;
}
