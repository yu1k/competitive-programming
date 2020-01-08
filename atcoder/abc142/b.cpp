#include <iostream>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    int result = 0;
    for(int i = 0; i < n; i++){
        int height;
        cin >> height;
        if(k <= height){
            result++;
        }
    }
    cout << result << endl;
}
