#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    int m;
    cin >> n >> k >> m;
    int result = n * m;
    for(int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        result -= a;
    }
    if(result <= k){
        if(result < 0){
            cout << 0 << endl;
        }
        else{
            cout << result << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}
