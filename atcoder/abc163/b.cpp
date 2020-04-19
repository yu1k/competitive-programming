#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += a[i];
    }
    if(n >= sum){
        cout << n - sum << endl;
    }
    else{
        cout << "-1" << endl;
    }
}
