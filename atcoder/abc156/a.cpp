#include <iostream>

using namespace std;

int main(){
    int n;
    int r;
    cin >> n >> r;
    int k;
    if(n < 10){
        cout << r + (100 * (10 - n)) << endl;
    }
    else{
        cout << r << endl;
    }
}