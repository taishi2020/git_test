// --------------------------------------------------
// Function    : Test file splitting
// Author      : T. TANAKA
// Description : file splitting in C++
//               (C++でのファイル分割)
// --------------------------------------------------

// --------------------------------------------------
// Include Directive
// --------------------------------------------------
#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>               // to_string()
//#include <fstream>              // ifstream, ofstream
//#include <cstdlib>


// --------------------------------------------------
// Using Declaration
// --------------------------------------------------
using std::cout;
using std::endl;

//using std::string;
//using std::printf;
//using std::vector;
//using std::to_string;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------
class myClass{
    private:
        int a;
    public:
        void set(int b);
        int get(void);
};

void myClass::set(int b){
    a = b;
}

int myClass::get(void){
    return a;
}

// --------------------------------------------------
// main Function
// --------------------------------------------------
int main(void){

    myClass c;
    c.set(5);
    cout << c.get() << endl;

    myClass c1, c2;
    c1.set(100);
    c2.set(200);
    cout << c1.get() << endl;
    cout << c2.get() << endl;

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
