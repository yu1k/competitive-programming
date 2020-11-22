#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b;
    cin >> c >> d;
    int result = ((a * d) - (b * c));
    cout << result << endl;
    return 0;
}