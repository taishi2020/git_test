// --------------------------------------------------
// Function    : template_practice4
// Author      : T. TANAKA
// Description : template plactice in C++
// --------------------------------------------------

/* --------------------------------------------------
◆参考文献：
C++ 動的配列クラス std__vector 入門.html
http://vivi.dyndns.org/tech/cpp/vector.html
-------------------------------------------------- */

// --------------------------------------------------
// Include directive
// --------------------------------------------------
#include <iostream>
//#include <cstdio>
//#include <string>
#include <vector>

// --------------------------------------------------
// Using declaration
// --------------------------------------------------
using std::cout;
using std::endl;

using std::string;
//using std::printf;
using std::vector;

// --------------------------------------------------
// Function declaration
// --------------------------------------------------
void vector_test1(void);
void vector_test2(void);
void vector_test3(void);
void vector_test4(void);
void vector_test5(void);
void vector_test6(void);
void vector_test7(void);

// --------------------------------------------------
// main function
// --------------------------------------------------
int main()
{
//    vector_test1();
//    vector_test2();
//    vector_test3();
//    vector_test4();
//    vector_test5();
//    vector_test6();
    vector_test7();

    return 0;
}

// --------------------------------------------------
void vector_test1(void){

    vector<int> v1;                         //  int 型の動的配列 data の宣言
    v1 = {1,2,3,4,5};

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test2(void){

    vector<int> v1{2,4,6,8,10,12};          // データ列を指定して動的配列v1を生成

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test3(void){

    vector<int> v1(5, 8);                   //  要素数5、全ての要素の値8 で初期化

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test4(void){

    vector<int> v1(4);                      //  int 型で、初期要素数 4 の動的配列 v1 の宣言
//    vector<int>::iterator itr = v1.begin(); // 最初の要素を指すイテレータ
    auto it = v1.begin();                   // 最初の要素を指すイテレータ
//    cout << *itr << endl;                   // 最初の要素の値を表示
//    ++itr;                                  // 次の要素に移動
//    *itr = 9;                               // 二番めの要素の値を 9 に変更

    int j = 5;
    for(auto it = v1.begin(); it != v1.end(); ++it) {
//        *it でイテレータの指す要素を参照
        *it = j;
        ++j;
    }

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test5(void){

    vector<int> v1;                         //  int 型で、動的配列 v1 の宣言

    for(int i=0; i<5; i++) {
        v1.push_back(i);
    }

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
//	for (auto it = v1.begin(); it != v1.end(); ++it) {
		cout << *it << endl;
	}

    cout << "---------------------------" << endl;

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test6(void){

    vector<int> v1;                         //  int 型で、動的配列 v1 の宣言

    for(int i=0; i<5; i++) {
        v1.push_back(i);
    }

    vector<int>::iterator it_begin = v1.begin();
    vector<int>::iterator it_end = v1.end();
    vector<int>::iterator it;

	for (it = it_begin; it != it_end; ++it) {
		cout << *it << endl;
	}

    cout << "---------------------------" << endl;

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
void vector_test7(void){

    vector<int> v1;                         //  int 型で、動的配列 v1 の宣言

    for(int i=0; i<5; i++) {
        v1.push_back(i);
    }

    auto it_begin = v1.begin();
    auto it_end = v1.end();
//    auto it;

	for (auto it = it_begin; it != it_end; ++it) {
		cout << *it << endl;
	}

    cout << "---------------------------" << endl;

    for(int i : v1){
        cout << i << endl;
    }
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
