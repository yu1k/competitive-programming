#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int diff = abs(a - b);
    int result = min(diff, 10 - diff);
    cout << result << endl;
    return 0;
}