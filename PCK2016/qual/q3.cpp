#include <iostream>

using namespace std;

int main(){
    int e;
    int y;
    cin >> e >> y;
    if(e == 0){
        if(y >= 1868 && y <= 1911){
            cout << "M" << y - 1867 << endl;
        }
        else if(y >= 1912 && y <= 1925){
            cout << "T" << y - 1911 << endl;
        }
        else if(y >= 1926 && y <= 1988){
            cout << "S" << y - 1925 << endl;
        }
        else if(y >= 1989 && y <= 2016){
            cout << "H" << y - 1988 << endl;
        }
    }
    else{
        if(e == 1){
            y += 1867;
        }
        if(e == 2){
            y += 1911;
        }
        if(e == 3){
            y += 1925;
        }
        if(e == 4){
            y += 1988;
        }
        cout << y << endl;
    }
}
