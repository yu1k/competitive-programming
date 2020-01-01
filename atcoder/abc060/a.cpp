#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string a;
    string b;
    string c;
    cin >> a >> b >> c;
    if(a.back() == b.front() && b.back() == c.front()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
