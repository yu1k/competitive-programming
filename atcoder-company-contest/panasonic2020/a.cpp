#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
     int a;
     int k[32] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
     cin >> a;
     cout << k[a - 1] << endl;
}