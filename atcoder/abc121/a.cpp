#include <iostream>

using namespace std;

int main(){
    int h;
    int w;
    int h1;
    int w1;
    cin >> h >> w;
    cin >> h1 >> w1;
    int result = (h - h1) * (w - w1);
    cout << result << endl;
}
