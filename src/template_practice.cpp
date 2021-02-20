// --------------------------------------------------
// 機能       : template_practice
// 新規作成日 ： 2021-02-20
// 最終更新日 ： 2021-02-20
// 作成者     : T. TANAKA
// --------------------------------------------------
#include <iostream>     // std::cout, std::endl
#include <vector>       // std::vector

//using namespace std;

using std::cout ;
using std::endl ;

// --------------------------------------------------
template <typename T>
T calc_max(T const& a, T const& b)
{
    T c = 0;

    if(a<b){
        c=b;
    }else{
        c=a;
    }

//    return a < b ? b : a;
    return c;
}

// --------------------------------------------------
template <typename T1, typename T2>
T1 calc_add(T1 a,T2 b){
    return a + b;
}

// --------------------------------------------------
void myfunc(void){
//    const int i=5;
    int i=5;

    cout << i << endl;

    int iarray[i];

    for(int j=0;j<5;j++){
        iarray[j] = j;
        cout << iarray[j] << endl;
    }

}

// --------------------------------------------------
// 出典：
// C++11 範囲ベース for ループ 入門.html
// http://vivi.dyndns.org/tech/cpp/range-for.html
// --------------------------------------------------
void myfunc2(void){
    int ar[] = {1, 2, 3, 4, 5, 6, 7};

    for(int x : ar) {
        cout << x << endl;     // 1 2 3・・・7 と順に表示される
    }
}

// --------------------------------------------------
// 出典：
// C++11 範囲ベース for ループ 入門.html
// http://vivi.dyndns.org/tech/cpp/range-for.html
// --------------------------------------------------
void myfunc3(void){
    std::vector<int> v{10, 20, 30, 40, 50, 60, 70};
    for(int x : v) {
        cout << x << endl;
    }
}

// --------------------------------------------------
template <typename T>
class myclass{
public:
    T value;
};

// --------------------------------------------------
int main(void)
{
    cout << calc_max(100, 160) << endl;
    cout << calc_add(100, 160) << endl;
//    cout << calc_add(100, 16a0a) << endl;

    cout << "----------------" << endl;
    myfunc();
    cout << "----------------" << endl;
    myfunc2();
    cout << "----------------" << endl;
    myfunc3();

    return 0;
}

// --------------------------------------------------
// EOF
// --------------------------------------------------
