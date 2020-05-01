#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(q);
    for(int i = 0; i < q; i++){
        cin >> a[i];
    }
    vector<int> point(n);
    for(int i = 0; i < n; i++){
        point[i] = k - q;
    }
    for(int i = 0; i < q; i++){
        point[a[i] - 1]++;
    }
    for(int i = 0; i < n; i++){
        if(point[i] > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}