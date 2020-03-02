#include <iostream>
#include <string>

using namespace std;

int main(){
    int h1;
    int w1;
    int h2;
    int w2;
    cin >> h1 >> w1;
    cin >> h2 >> w2;
    string result = "NO";
    if((h1 == h2) || (w1 == w2) || (h1 == w2) || (w1 == h2)){
        result = "YES";
    }
    cout << result << endl;
}
