#include <iostream>

using namespace std;

int main(){
    string a;
    string b;
    cin >>  a >> b;
    if(a[0] == b[2] && a[1] == b[1] && a[2] == b[0]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
