#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b;
    string op;
    while(1){
        cin >> a >> op >> b;
        if(op == "?") break;
        if(op == "+"){
            cout << a + b << endl;
        }
        if(op == "-"){
            cout << a - b << endl;
        }
        if(op == "*"){
            cout << a * b << endl;
        }
        if(op == "/"){
            cout << a / b << endl;
        }
    }
}