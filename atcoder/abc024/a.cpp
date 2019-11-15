#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    int C;
    int K;
    int S;
    int T;
    cin >> A >> B >> C >> K;
    cin >> S >> T;
    if(K <= (S + T)){
        cout << (A * S) + (B * T) - (C * (S + T)) << endl;
    }
    else if(K > (S + T)){
        cout << (A * S) + (B * T) << endl;
    }
}
