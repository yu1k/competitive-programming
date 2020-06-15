#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    vector<int> x(5);
    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }
    int count = 0;
    for(int i = 0; i < 5; i++){
        count++;
        if(x[i] == 0){
            break;
        }
    }
    cout << count << endl;
    return 0;
}