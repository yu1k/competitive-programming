#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    vector<int> r(n);
    int result = 0;
    for(int i = 0; i < n; i++){
        cin >> l[i];
        cin >> r[i];
        result += (r[i] - l[i]) + 1;
    }
    cout << result << endl;
}
