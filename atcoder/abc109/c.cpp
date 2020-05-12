#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int n;
    int x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        d[i] = abs(a[i] - x);
    }
    int result = d[0];
    for(int i = 0; i < n; i++){
        result = gcd(result, d[i]);
    }
    cout << result << endl;
    return 0;
}