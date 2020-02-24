#include <iostream>

using namespace std;

int main(){
    long long a;
    long long b;
    long long c;
    cin >> a >> b >> c;
    long long result = a * b % 1000000007 * c % 1000000007;
    cout << result << endl;
}