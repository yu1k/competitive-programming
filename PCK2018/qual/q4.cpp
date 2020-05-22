#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int x;
    cin >> a >> b >> x;
    int result = 0;
    x = (x + 499) / 500;
    a = min(a, b * 2);
    if(x % 2 == 0){
        result = a * (x / 2);
    }
    else{
        result = a * (x / 2) + b;
    }
    cout << result << endl;
    return 0;
}