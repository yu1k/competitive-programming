#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int k;
    int x;
    cin >> k >> x;
    cout << max({k + x, k - x, k * x}) << endl;
}
