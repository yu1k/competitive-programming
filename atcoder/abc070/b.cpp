#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    int result = max(0, min(b, d) - max(a, c));
    cout << result << endl;
}