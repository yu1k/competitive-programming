//DISCO presents ディスカバリーチャンネル コードコンテスト2020 予選

#include <iostream>

using namespace std;

int main(){
    int X;
    int Y;
    cin >> X >> Y;
    if(X == 1 && Y == 1){
        cout << 1000000 << endl;
    }
    else if(X == 2 && Y == 2){
        cout << 400000<< endl;
    }
    else if(X == 3 && Y == 3){
        cout << 200000 << endl;
    }
    else if(X == 1 && Y == 2){
        cout << 500000 << endl;
    }
    else if(X == 1 && Y == 3){
        cout << 400000 << endl;
    }
    else if(X == 2 && Y == 1){
        cout << 500000 << endl;
    }
    else if(X == 2 && Y == 2){
        cout << 300000 << endl;
    }
    else if(X == 2 && Y == 3){
        cout << 300000 << endl;
    }
    else if(X == 3 && Y == 1){
        cout << 400000 << endl;
    }
    else if(X == 3 && Y == 2){
        cout << 300000 << endl;
    }
    else if(X == 3 && Y == 3){
        cout << 200000 << endl;
    }
    else if(X == 1 && Y >= 4){
        cout << 300000 << endl;
    }
    else if(X == 2 && Y >= 4){
        cout << 200000 << endl;
    }
    else if(X == 3 && Y >= 4){
        cout << 100000 << endl;
    }
    else if(X >= 4 && Y == 1){
        cout << 300000 << endl;
    }
    else if(X >= 4 && Y == 2){
        cout << 200000 << endl;
    }
    else if(X >= 4 && Y == 3){
        cout << 100000 << endl;
    }
    else if(X >= 4 && Y <= 4){
        cout << 0 << endl;
    }
    else{
    cout << 0 << endl;
    }
}
