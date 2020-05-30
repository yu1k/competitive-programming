#include <iostream>

using namespace std;

int main(){
    int h1;
    int m1;
    int h2;
    int m2;
    int k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;
    int a = (((h2 - h1) * 2) * 30) + (m2 - m1);
    if(a == k){
        cout << 0 << endl;
    }
    else{
        cout << a - k << endl;
    }
    return 0;
}
