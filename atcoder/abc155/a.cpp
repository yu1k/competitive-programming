#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(a == b && b == c){
        cout << "No" << endl;
    }
    else if(a == b){
        cout << "Yes" << endl;
    }
    else if(b == c){
        cout << "Yes" << endl;
    }
    else if(a == c){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}