#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    string b;
    cin >> a >> b;
    string str = a + b;
    int n = atoi(str.c_str());
    cout << n * 2 << endl;
    return 0;
}