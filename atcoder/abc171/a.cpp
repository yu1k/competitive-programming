#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    char a;
    cin >> a;
    int num = int(a);
    if(65 <= num  && num <= 90){
        cout << "A" << endl;
    }
    else{
        cout << "a" << endl;
    }
    return 0;
}