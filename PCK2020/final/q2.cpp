#include <iostream>

using namespace std;

int main(){
    int d;
    cin >> d;
    double result = 0;
    int time = (d / (60 * 60));
    d = (d % (60 * 60));
    int minutes = (d / 60);
    int seconds = (d % 60);
    cout << time << " " << minutes << " " << seconds << endl;
    return 0;
}