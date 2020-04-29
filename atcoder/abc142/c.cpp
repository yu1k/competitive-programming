#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> result(n);
    for(int i = 0; i < n; i++){
        result[a[i] - 1] = i + 1;
    }
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
    cout << "" << endl;
}