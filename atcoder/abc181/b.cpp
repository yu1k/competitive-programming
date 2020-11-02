#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    long long result = 0;
    for(int i = 0; i < n; i++){
        result += ((b[i] * (b[i] + 1)) / 2) - ((a[i] * (a[i] - 1)) / 2);
    }
    cout << result << endl;
    return 0;
}