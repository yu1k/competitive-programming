#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int k;
    cin >> a >> b >> k;
    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0){
            if(b % i == 0){
                k--;
            if(k == 0){
                cout << i << endl;
                }
            }
        }
    }
}