#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    int result = 0;
    if(a < 0){
        result = abs(a * c) + d + (e * b);
    }
    else{
        result = (b - a) * e;
    }
    cout << result << endl;
    return 0;
}