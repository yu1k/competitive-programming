#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 1000;
    if(n > 1000 && n <= 2000){
        num = 2000;
    }
    else if(n > 2000 && n <= 3000){
        num = 3000;
    }
    else if(n > 3000 && n <= 4000){
        num = 4000;
    }
    else if(n > 4000 && n <= 5000){
        num = 5000;
    }
    else if(n > 5000 && n <= 6000){
        num = 6000;
    }
    else if(n > 6000 && n <= 7000){
        num = 7000;
    }
    else if(n > 7000 && n <= 8000){
        num = 8000;
    }
    else if(n > 8000 && n <= 9000){
        num = 9000;
    }
    else if(n > 9000 && n <= 10000){
        num = 10000;
    }
    int result = num - n;
    cout << result << endl;
    return 0;
}