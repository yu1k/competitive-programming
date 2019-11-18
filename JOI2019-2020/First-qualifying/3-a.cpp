#include <iostream>

using namespace std;

int main(){
    int X;
    int L;
    int R;
    cin >> X >> L >> R;
    if(X < L){
        cout << L << endl;
    }
    else if(L <= X and X <= R){
        cout << X << endl;
    }
    else if(R < X){
        cout << R << endl;
    }
}
