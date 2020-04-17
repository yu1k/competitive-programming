#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] * 4 * m >= sum){
            count++;
        }
    }
    if(count >= m){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
