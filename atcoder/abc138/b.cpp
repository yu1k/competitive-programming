#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double result = 0;
    for(int i = 0; i < n; i++){
        double a;
        cin >> a;
        result += 1 / a;
    }
    cout << 1 / result << endl;
}
