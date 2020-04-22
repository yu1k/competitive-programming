#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    long long k;
    cin >> n >> k;
    long long t = n % k;
    cout << min(t, k - t) << endl;
}
