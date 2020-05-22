#include <iostream>

using namespace std;

int pow(int x, int y){
    int result = x;
    for(int i = 1; i < y; i++){
        result *= x;
    }
    return result;
}

int main(){
    long long a;
    long long b;
    cin >> a >> b;
    long long ans = pow(a, b);
    cout << ans << endl;
    return 0;
}