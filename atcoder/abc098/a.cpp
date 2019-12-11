#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int result = max({a + b, a - b, a * b});
    cout << result << endl;
}
