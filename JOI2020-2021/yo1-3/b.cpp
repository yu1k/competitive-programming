#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(s[i] != 'I'){
                count++;
            }
        }
        if(i % 2 == 1){
            if(s[i] != 'O'){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}