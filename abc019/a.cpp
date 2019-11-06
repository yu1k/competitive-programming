#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int S[3] = {a, b, c};
    sort(S, S+3);
    cout << S[1] << endl;
}
