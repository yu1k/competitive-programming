#include <iostream>

using namespace std;

int main(){
    int ans = 0;
    for(int i = 0; i < 3; i++){
        int s;
        int e;
        cin >> s >> e;
        ans += (s /10) * e;
    }
    cout << ans << endl;
}
