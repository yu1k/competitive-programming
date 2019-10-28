#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    cin >> A >> B;
    if(A <= 9 && B <= 9){
        cout << A * B << endl;
    }
    else{
        cout << -1 << endl;
    }
}
