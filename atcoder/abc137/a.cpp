#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    cout << max({a + b, a - b, a * b}) << endl;
}
