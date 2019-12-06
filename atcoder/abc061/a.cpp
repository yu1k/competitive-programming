#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if(c >= a && c <= b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
