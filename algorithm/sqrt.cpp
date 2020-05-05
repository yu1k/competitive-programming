#include <iostream>

using namespace std;

float sqrt(float n){
    float root;
    int a;
    a = 3;
    root = 0;
    do{
        root += 1;
    }while(root * root < n);
    for(int i = 0; i < a; i++){
        root = (root + n / root) / 2;
    }
    return root;
}