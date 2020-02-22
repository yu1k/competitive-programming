#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;

    if(a == 1){
        a = a + 13;
    }
    if(b == 1){
        b = b + 13;
    }

    if(a > b){
        cout << "Alice" << endl;
    }
    else if(a < b){
        cout << "Bob" << endl;
    }
    else{
        cout << "Draw" << endl;
    }
}