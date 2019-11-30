#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    if(b < a){
        cout << a + (a - 1) << endl;
    }
    else if(a < b){
        cout << b + (b - 1) << endl;
    }
    else{
        cout << a + b << endl;
    }
}
