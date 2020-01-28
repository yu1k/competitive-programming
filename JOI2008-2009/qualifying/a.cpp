#include <iostream>

using namespace std;

int main(){
    int h[3];
    int m[3];
    int s[3];
    int a[3];
    int b[3];
    int c[3];
    int result[3];
    for(int i = 0; i < 3; i++){
    cin >> h[i] >> m[i] >> s[i];
    cin >> a[i] >> b[i] >> c[i];
    result[i] = (a[i] * 3600 + b[i] * 60 + c[i]) - (h[i] * 3600 + m[i] * 60 + s[i]);
    }
    for(int i = 0; i < 3; i++){
        cout << result[i] / 3600 << " ";
        result[i] = result[i] % 3600;
        cout << result[i] / 60 << " ";
        result[i] = result[i] % 60;
        cout << result[i] << endl;
    }
}
