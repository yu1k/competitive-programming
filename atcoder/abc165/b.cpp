#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){
    long long x;
    cin >> x;
    long long count = 0;
    long long num = 100;
    while(1){
      	num *= 1.01;
          count++;
        if(x <= num){
            break;
        }
    }
    cout << count << endl;
    return 0;
}