#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> result(n);
    for(int i = 0; i < n - 1; i++){
        cin >> a[i];
        result[a[i] - 1]++;
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << endl;
    }
}
