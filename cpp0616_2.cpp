#include <iostream>
#include <vector>
#include <complex>
using namespace std;
using cplx = complex<double>;


template <typename T>
void showVector(T& v) {
    for (const auto& x : v) cout << x << ", ";
    cout << endl;
}

int main(){
    vector<cplx> v;

    cplx z(3.,4.); // オブジェクトの構築
    v.push_back(z); // 要素の追加（コピー）

    v.emplace_back(1.,2.); // 要素のオブジェクトの構築

    showVector(v); // output: (3,4), (1,2), 
}