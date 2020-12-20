#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string to_octal(int n){
    string s;
    while(n){
        s = to_string(n % 8) + s;
        n /= 8;
    }
    return s;
}

int main(){
    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i <= n; i++){
        string octal = to_octal(i);
        string decimal = to_string(i);
        if(octal.find('7') < octal.length() || decimal.find('7') < decimal.length()){
            count++;
        }
    }
    int result = (n - count);
    cout << (n - count) << endl;
    return 0;
}