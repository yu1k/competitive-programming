#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int result_min = min(a + b, a - b);
    int result_max = max(a + b, a - b);
    cout << result_max << endl;
    cout << result_min << endl;
    return 0;
}