#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int l;
    int r;
    int d;
    cin >> l >> r >> d;
    int count = 0;
    for(int i = 0; i <= r; i++){
        if(l <= i && r >= i){
            if(i % d == 0){
                count++;
            }
        }
        else{
            continue;
        }
    }
    cout << count << endl;
    return 0;
}
