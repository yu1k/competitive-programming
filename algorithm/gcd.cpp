#include <iostream>

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
    int k;
    cin >> n >> k;
    int result = gcd(n, k);
    cout << result << endl;
}
