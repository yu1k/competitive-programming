#include <iostream>

using namespace std;

int main(){
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    swap(x, y);
    swap(x, z);
    cout << x << " " << y << " " << z << endl;
}
