#include <iostream>

using namespace std;

int main(){
    string NomePersonagem = "Plinio";
    int IdadePersonagem;
    IdadePersonagem = 3;

    cout << "Era uma vez um garoto chamado " << NomePersonagem << endl;
    cout <<  NomePersonagem << " tinha " << IdadePersonagem<< " anos" << endl;

    NomePersonagem = "MaquinaMortifera";

    cout << NomePersonagem << " nao gostava de ter " << IdadePersonagem << " anos" << endl;
    cout << "Mas " <<  NomePersonagem << " gostava de seu nome" << endl;

    return 0;
}
