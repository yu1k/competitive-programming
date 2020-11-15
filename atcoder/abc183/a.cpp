#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int relu(int x){
    return max(0, x);;
}

int main(){
    int x;
    cin >> x;
    int result = relu(x);
    cout << result << endl;
    return 0;
}