#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a + b == c || b + c == a || c + a == b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
