#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    if(n % k == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }
}

