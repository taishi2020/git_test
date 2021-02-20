// --------------------------------------------------
// 機能       : template_practice2
// 新規作成日 ： 2021-02-20
// 最終更新日 ： 2021-02-20
// 作成者     : T. TANAKA
// --------------------------------------------------

/* --------------------------------------------------
◆参考文献：
basic_string - cpprefjp C++日本語リファレンス.html
https://cpprefjp.github.io/reference/string/basic_string.html
-------------------------------------------------- */

#include <iostream>
#include <cstdio>
#include <string>

// --------------------------------------------------
using std::string;
using std::cout;
using std::printf;
using std::endl;

// --------------------------------------------------
int main()
{
  string s = "hello";           // C文字列からstringオブジェクトを構築
  s += " world";                // 末尾に文字列を追加
  string hello = s.substr(0, 5);// 部分文字列を取得
                                // (始点:0、始点からの文字数:5)
  cout << hello << endl;        // ostreamへの出力
  printf("%s", s.c_str());      // C文字列を取得し、
                                // const char*を要求するAPIに渡す
  cout << endl;

}

// --------------------------------------------------
// EOF
// --------------------------------------------------
