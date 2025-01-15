#include <iostream>
using namespace std;

class Chef{
    public:
        void MakeChicken(){
            cout << "The chef makes chicken" << endl;
        }

        void MakeSalad(){
            cout << "The chef makes salad" << endl;
        }

        void MakeSpecialDish(){
            cout << "The chef makes bbg ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void MakesPasta(){
            cout << "The chef makes pasta" << endl;
        }
        void MakeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main(){
    Chef chef1;
    chef1.MakeChicken();

    ItalianChef italianChef1;
    italianChef1.MakeSpecialDish();
    return 0;
}
