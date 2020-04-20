#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return gcd(b, a % b);
    }
}

int main(){
    int w;
    int h;
    int c;
    cin >> w >> h >> c;
    int whgcd = gcd(w, h);
    cout << (w / whgcd) * (h / whgcd) * c << endl;
}
