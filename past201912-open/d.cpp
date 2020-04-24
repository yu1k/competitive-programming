#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> count(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        count[a[i]]++;
    }
    int x = 0;
    int y = 0;
    for(int i = 1; i < n + 1; i++){
        if(count[i] == 0){
            x = i;
        }
        if(count[i] > 1){
            y = i;
        }
    }
    if(y == 0 && x == 0){
        cout << "Correct" << endl;
    }
    else{
        cout << y << " " << x << endl;;
    }
}
