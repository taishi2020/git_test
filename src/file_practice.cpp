// --------------------------------------------------
// Function    : file_practice
// Author      : T. TANAKA
// Description : class plactice in C++
// --------------------------------------------------

// --------------------------------------------------
// Include Directive
// --------------------------------------------------
#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>               // to_string()
#include <fstream>              // ifstream, ofstream
#include <cstdlib>


// --------------------------------------------------
// Using Declaration
// --------------------------------------------------
using std::cout;
using std::endl;

using std::string;
//using std::printf;
//using std::vector;
//using std::to_string;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------


// --------------------------------------------------
// main Function
// --------------------------------------------------
int main(void){
    std::ofstream ofs("hello.txt");

    if (!ofs) {
        std::cerr << "ファイルオープンに失敗" << endl;
        std::exit(1);
    }

    ofs << "Hello, World" << endl;

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
