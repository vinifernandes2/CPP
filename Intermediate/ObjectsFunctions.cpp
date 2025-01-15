#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }else{
                return false;
            }
        }
};

int main(){
    Student student1("Jaimin", "Engineer", 4.7);
    Student student2("Cleitin", "Arts", 2.3);

    cout << student1.hasHonors() << endl;

    return 0;
}
