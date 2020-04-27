#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> f(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
        cin >> f[i];
    }
    for(int i = 0; i < n; i++){
        if(b > s[i] && a < f[i]){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}