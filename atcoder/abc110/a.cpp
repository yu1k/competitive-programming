#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int mx = max({a, b, c});
    int result = a + b + c + 9 * mx;
    cout << result << endl;
}
