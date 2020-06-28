#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int a;
    cin >> a;
    int result = a + (a * a) + (a * a * a);
    cout << result << endl;
    return 0;
}