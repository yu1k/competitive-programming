#include <iostream>

using namespace std;

int main(){
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    int ans;
    if(A == B) ans = C;
    if(B == C) ans = A;
    if(C == A) ans = B;
    cout << ans << endl;
}
