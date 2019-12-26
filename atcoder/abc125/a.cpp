#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int t;
    cin >> a >> b >> t;
    int generated_times = t / a;
    int result = generated_times * b;
    cout << result << endl;
}
