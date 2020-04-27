#include <iostream>
#include <string>

using namespace std;

int main(){
    int x;
    cin >> x;
    string day[7] = {"mon", "tue", "wed", "thu", "fri", "sat", "sun"};
    cout << day[(x + 3) % 7] << endl;
}