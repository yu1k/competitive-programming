#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        if(p[i] != i + 1){
            count++;
        }
    }
    if(count <= 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}