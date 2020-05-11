#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> x(2);
    for(int i = 0; i < 2; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    cout << x[1] - x[0] << endl;
    return 0;
}