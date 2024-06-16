#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v{ 2, 3, 5, 7 };

    // 要素をコピーして取り出す
    for (auto x : v) cout << x << ", "; // output: 2, 3, 5, 7, 
    cout << endl;
    // コンテナの要素を変更することはできない
    for (auto x : v) x = 1;
    for (auto x : v) cout << x << ", "; // output: 2, 3, 5, 7, 
    cout << endl;

    // 要素の参照を利用する。
    for (auto& x : v) cout << x << ", "; //output: 2, 3, 5, 7, 
    cout << endl;
    // コンテナの要素を変更することができる。
    for (auto& x : v) ++x;
    for (auto x : v) cout << x << ", "; //output: 3, 4, 6, 8, 
    cout << endl;
}