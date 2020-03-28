#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int result = 1000 * (x / 500) + 5 * ((x % 500) / 5);
    cout << result << endl;
}