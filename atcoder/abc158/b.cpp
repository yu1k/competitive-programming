#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    long long a;
    long long b;
    cin >> n >> a >> b;
    long long result;
    result = n / (a + b) * a + min(n % (a + b), a);
    cout << result << endl;
}