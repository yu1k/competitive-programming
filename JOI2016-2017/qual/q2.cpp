#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
    }
    int tmp = 0;
    int sum = 0;
    int max = 0;
    for(int i = 0; i < m; i++){
        tmp = n - a[i];
        if(tmp > 0){
            sum += tmp;
        }
        if(tmp > max){
            max = tmp;
        }
    }
    cout << sum - max << endl;
    return 0;
}