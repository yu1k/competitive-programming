#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    string b;
    string c;
    cin >> a >> b >> c;
    a[0] = a[0] + 'A' - 'a';
    b[0] = b[0] + 'A' - 'a';
    c[0] = c[0] + 'A' - 'a';
    cout << a[0] << b[0] << c[0] << endl;
}