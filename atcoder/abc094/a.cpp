#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int x;
    cin >> a >> b >> x;
    if(x >= a && x <= a + b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
