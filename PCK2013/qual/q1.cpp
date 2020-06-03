#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a(7);
    vector<int> b(7);
    for(int i = 0; i < 7; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < 7; i++){
        cout << a[i] - b[i] << endl;
    }
    return 0;
}