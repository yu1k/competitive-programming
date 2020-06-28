#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int p;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> p;
    int x = a * p;
    int y = 0;
    if(p <= c){
        y = b;
    }
    else{
        y = b + (p - c) * d;
    }
    int result = x;
    if(x > y){
        result = y;
    }
    cout << result << endl;
    return 0;
}