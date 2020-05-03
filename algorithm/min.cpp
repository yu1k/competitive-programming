#include <iostream>

using namespace std;

int min(int x, int y){
    if(x < y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int x;
    int y;
    cin >> x >> y;
    cout << min(x, y) << endl;
}