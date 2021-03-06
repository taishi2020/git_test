// --------------------------------------------------
// Function    : Test file splitting2
// Author      : T. TANAKA
// Description : file splitting in C++
//               (C++でのファイル分割)
// --------------------------------------------------

// --------------------------------------------------
// Include Directive
// --------------------------------------------------

// <> : preprocessorが/usr/includeをsearchする
#include <iostream>
// "" : preprocessorがuserが作成したdirectoryをsearchする
#include "Test_file_splitting2.h"

// --------------------------------------------------
// Using Declaration
// --------------------------------------------------
using std::cout;
using std::endl;

// --------------------------------------------------
// Class Definition
// --------------------------------------------------

// --------------------------------------------------
// main Function
// --------------------------------------------------
int main(void){

    myClass c;
    c.set(50);
    cout << c.get() << endl;

    myClass c1, c2;
    c1.set(1000);
    c2.set(2000);
    cout << c1.get() << endl;
    cout << c2.get() << endl;

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
