#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    string result = "YES";
    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1]){
            result = "NO";
        }
    }
    cout << result << endl;
}