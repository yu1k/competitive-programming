#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    string t;
    string u;
    int a;
    int b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    if(s == u){
        cout << a - 1 << " " << b << endl;
    }
    else if(t == u){
        cout << a << " " << b - 1 << endl;
    }
}