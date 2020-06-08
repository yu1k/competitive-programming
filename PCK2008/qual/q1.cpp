#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> name(9);
    vector<int> a(9);
    vector<int> b(9);
    for(int i = 0; i < 9; i++){
        cin >> name[i] >> a[i] >> b[i];
    }
    for(int i = 0; i < 9; i++){
        cout << name[i] << " " << a[i] + b[i] << " " << (a[i] * 200) + (b[i] * 300) << endl;
    }
    return 0; 
}