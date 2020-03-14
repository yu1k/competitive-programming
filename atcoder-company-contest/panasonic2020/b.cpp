#include <iostream>

using namespace std;

int main(){
    long long h;
    long long w;
    cin >> h >> w;
    while(1){
        if(h == 1 || w == 1){
            cout << 1 << endl;
            break;
        }
        else{
            cout << (h * w + 1) / 2 << endl;
            break;
        }
    }
}