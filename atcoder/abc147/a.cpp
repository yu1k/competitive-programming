#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a + b + c >= 22){
        cout << "bust" << endl;
    }
    else {
        cout << "win" << endl;
    }
}
