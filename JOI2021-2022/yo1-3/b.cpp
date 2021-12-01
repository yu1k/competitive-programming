#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[]){
    int s;
    int a;
    int b;
    std::cin >> s;
    std::cin >> a;
    std::cin >> b;
    int base_price = 250;
    int base_tower = a;
    int add_price = 100;
    for(int i = 0; i < 101; i++){
        if(s <= base_tower){
            break;
        }
        base_tower += b;
        base_price += add_price;
    }
    std::cout << base_price << std::endl;
    return 0;
}