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
    int pre = a[0];
    for(int i = 1; i < n; i++){
        int today = a[i];
        if(pre < today){
            cout << "up" << " " << today - pre << endl;
        }
        else if(pre > today){
            cout << "down" << " " << pre - today<< endl;
        }
        else{
            cout << "stay" << endl;
        }
        pre = today;
    }
}