#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    cin >> x >> y;
    while(1){
        if(x < y){
            cout << x << " " << y << endl;
        }
        else{
            cout << y << " " << x << endl;
        }
        cin >> x >> y;
        if(x == 0 && y == 0) break;
    }
}