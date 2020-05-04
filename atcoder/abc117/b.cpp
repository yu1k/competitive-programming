#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> l(n);
    int sum = 0;
    int maxl = 0;
    for(int i = 0; i < n; i++){
        cin >> l[i];
        sum += l[i];
        maxl = max(maxl, l[i]);
    }
    if(maxl < sum - maxl){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}