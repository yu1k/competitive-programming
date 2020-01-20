#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    int result = max(a + b + c + d, e + f + g + h);
    cout << result << endl;
}
