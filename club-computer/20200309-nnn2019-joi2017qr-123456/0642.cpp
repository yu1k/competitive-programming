#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        sum = max(sum, count);
    }
    int result = sum + 1; 
    cout << result << endl;
}