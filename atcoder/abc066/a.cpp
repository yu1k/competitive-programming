#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    cout << (a + b + c) - max << endl;
}