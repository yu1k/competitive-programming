#include <iostream>

using namespace std;

int main(){
    int n;
    int x;
    int y;
    int z;
    int result = 0;
    cin >> n >> x >> y >> z;
    for(int i = 0; i < n; i++){
        int a;
        int b;
        cin >> a >> b;
    if((a >= x && b >= y) && ((a + b) >= z)){
        result++;
        }
    }
    cout << result << endl;
}
