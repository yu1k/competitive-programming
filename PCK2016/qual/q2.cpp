#include <iostream>

using namespace std;

int main(){
    int h;
    int r;
    cin >> h >> r;
    if((h + r) > 0){
        cout << "1" << endl;
    }
    else if((h + r) < 0){
        cout << "-1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}
