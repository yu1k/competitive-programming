#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin >> a >>b  >> c >> d;
    if((a * b) < (c * d)){
         cout << c * d << endl;
    }
    else if((a * b) == (c * d)){
        cout << a * b << endl;
    }
    else{
        cout << a * b << endl;
    }
}
