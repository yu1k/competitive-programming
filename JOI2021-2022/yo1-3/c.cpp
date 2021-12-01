#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[]){
    int n;
    int k;
    std::string s;
    std::cin >> n;
    std::cin >> k;
    std::cin >> s;
    int count = 0;
    for(int i = 0; i < (n - 1); i++){
        if(s[i] == 'W'){
            count++;
        }
    }
    // k人が紅組 R
    // n - k人が白組 W
    // count は W
    if(count == (n - k)){
        std::cout << "R" << std::endl;
    }
    else{
        std::cout << "W" << std::endl;
    }
    return 0;
}