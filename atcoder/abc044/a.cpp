#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int x;
    int y;
    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;
    if(k < n){
        cout << k * x +(n - k) * y << endl;
    }
    else{
        cout << n * x << endl;
    }
}
