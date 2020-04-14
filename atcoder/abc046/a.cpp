#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a == b && b == c && a == c){
        cout << 1 << endl;    
    }
    else if(((a == b) && (b != c)) || ((a == c) && (c != b)) || ((b == c) && (c != a)) ){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
    }
}
