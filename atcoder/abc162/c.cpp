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
    int k;
    cin >> k;
    int result = 0;
    for(int a = 1; a < k + 1; a++){
        for(int b = 1; b < k + 1; b++){
            for(int c = 1; c < k + 1; c++){
                result += gcd(a, gcd(b, c));
            }
        }
    }
    cout << result << endl;
}
