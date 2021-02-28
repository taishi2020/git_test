// --------------------------------------------------
// Function    : file_operation_practice
// Author      : T. TANAKA
// Description : file operation plactice in C++
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
using std::cerr;
using std::exit;
using std::ofstream;

//using std::string;
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
    ofstream ofs("file_test.txt");

    if (!ofs) {
        cerr << "ファイルオープンに失敗" << endl;
        exit(1);
    }

    ofs << "Hello, file World 3 std" << endl;

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
