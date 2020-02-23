#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    int result = 0;
    while(n > 0){
        n = n / k;
        result++;
    }
    cout << result << endl;
}