#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    string result = "APPROVED";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            if(a[i] % 3 == 0 || a[i] % 5 == 0){
                result;
            }
            else{
                result = "DENIED";
            }
        }
    }
    cout << result << endl;
}
