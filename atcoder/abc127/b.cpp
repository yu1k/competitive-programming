#include <iostream>

using namespace std;

int main(){
    int r;
    int d;
    int x;
    cin >> r >> d >> x;
    for(int i = 0; i < 10; i++){
        x = x * r - d;
        cout << x << endl;
    }
}
