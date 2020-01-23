#include <iostream>

using namespace std;

int main(){
    int n;
    int x;
    cin >> n >> x;
    int l[n + 1];
    int sum = 0;
    int result = 1;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    for(int i = 0; i < n; i++){
        sum = sum + l[i];
        if(sum <= x){
            result++;
        }
    }
    cout << result << endl;
}
