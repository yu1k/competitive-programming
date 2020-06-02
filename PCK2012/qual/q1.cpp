#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> s(10);
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += s[i];
    }
    cout << sum << endl;
    return 0;
}