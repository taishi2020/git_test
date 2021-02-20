// --------------------------------------------------
// Function    : class_practice
// Author      : T. TANAKA
// Description : class plactice in C++
// --------------------------------------------------

// --------------------------------------------------
// Include Directive
// --------------------------------------------------
#include <iostream>
//#include <cstdio>
#include <vector>
#include <string>   // to_string()

// --------------------------------------------------
// Using Declaration
// --------------------------------------------------
using std::cout;
using std::endl;

using std::string;
//using std::printf;
//using std::vector;
using std::to_string;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------
class Persons{
    private:
        string name;
        int age;
    public:
        // ------------------------------
        void set_name(string p_name){
            name = p_name;
        }
        string get_name(void){
            return name;
        }
        // ------------------------------
        void set_age(int p_age){
            age = p_age;
        }
        int get_age(void){
            return age;
        }
        // ------------------------------
};

struct sPersons{
    string name;
    int age;
};

// --------------------------------------------------
// main Function
// --------------------------------------------------
int main(void){
    Persons p1;
    p1.set_name("Naito");
    p1.set_age(30);

    Persons p2;
    p2.set_name("Fujimoto");
    p2.set_age(25);

    cout << p1.get_name() << endl;
    cout << p2.get_name() << endl;

    string st_age1 = to_string(p1.get_age());
    string st_age2 = to_string(p2.get_age());
    cout << p1.get_name() + " is " + st_age1 + "." << endl;
    cout << p2.get_name() + " is " + st_age2 + "." << endl;

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
