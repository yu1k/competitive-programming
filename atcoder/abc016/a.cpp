#include <iostream>

using namespace std;

int main(){
    int M;
    int D;
    cin >> M >> D;
    if(M % D == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
