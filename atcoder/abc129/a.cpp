#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int p;
    int q;
    int r;
    cin >> p >> q >> r;
    cout << p + q + r - max({p, q, r}) << endl;
}
