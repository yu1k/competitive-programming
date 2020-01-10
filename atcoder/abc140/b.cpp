#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int c[n - 1];
    int result = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        result += b[i];
    }
    for(int i = 0; i < n - 1; i++){
        cin >> c[i];
    }
    for(int i = 1; i < n; i++){
        if(a[i] - a[i - 1] == 1){
            result += c[a[i - 1]];
        }
    }
    cout << result << endl;
}
