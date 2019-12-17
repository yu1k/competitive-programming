#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) - min({a, b, c}) << endl;

}
