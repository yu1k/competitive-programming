#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> science(4);
    for(int i = 0; i < 4; i ++){
        cin >> science[i];
    }
    vector<int> social(2);
    for(int i = 0; i < 2; i ++){
        cin >> social[i];
    }
    sort(science.begin(), science.end(), greater<int>());
    sort(social.begin(), social.end(), greater<int>());
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += science[i];
    }
    for(int i = 0; i < 1; i++){
        sum += social[i];
    }
    cout << sum << endl;
    return 0;
}