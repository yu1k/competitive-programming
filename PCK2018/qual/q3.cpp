#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int c;
    cin >> n >> c;
    vector<int> p(c);
    int sum = 0;
    for(int i = 0; i < c; i++){
        cin >> p[i];
        sum += p[i];
    }
    int result = (sum + n) / (n + 1);
    cout << result << endl;
    return 0;
}