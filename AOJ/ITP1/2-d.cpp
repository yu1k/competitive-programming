#include <iostream>

using namespace std;

int main(){
    int w;
    int h;
    int x;
    int y;
    int r;
    cin >> w >> h >> x >> y >> r;
    if((x >= r) && (x <= w - r) && (y >= r) && (y <= h - r)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}