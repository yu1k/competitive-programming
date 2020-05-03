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
    int minv = 1000007;
    for(int i = 0; i < n; i++){
        if(a[i] < minv){
            minv = a[i];
        }
    }
    cout << minv << endl;
}