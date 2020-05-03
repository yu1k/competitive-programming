#include <iostream>

using namespace std;

int max(int x, int y){
    if(x > y){
        return x; 
    }
    else{
        return y;
    }
    return 0;
}

int main(){
    int x;
    int y;
    cin >> x >> y;
    cout << max(x, y) << endl;
    return 0;
}