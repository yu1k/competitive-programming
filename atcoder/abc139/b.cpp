#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int result = 0;
    int outlet = 1;
    cin >> a >> b;
    while(outlet < b){
        outlet--;
        outlet += a;
        result++;
    }
    cout << result << endl;
}
