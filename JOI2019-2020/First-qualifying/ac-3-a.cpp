#include <iostream>

using namespace std;

int main(){
    int x;
    int l;
    int r;
    cin >> x >> l >> r;
    if(x <= l){
        cout << l << endl;
    }
    else if(r <= x){
        cout << r << endl;
    }
    else{
        cout << x << endl;
    }
}
