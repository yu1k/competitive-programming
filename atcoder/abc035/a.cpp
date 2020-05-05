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
    int a;
    int b;
    cin >> a >> b;
    int n = gcd(a, b);
    cout << a / n << ":" << b / n << endl;
    return 0;
}