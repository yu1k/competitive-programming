#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >= 65 && n <= 90){
        cout << 1 << endl;
    } else if(n >= 97 && n <= 122){
        cout << 2 << endl;
    } else{
        cout << 0 << endl;
    }
}
