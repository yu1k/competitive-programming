#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> pasta(3); 
    std::vector<int> juice(2);
    for(int i = 0; i < 3; i++){
        scanf("%d", &pasta[i]);
    }
    for(int i = 0; i < 2; i++){
        scanf("%d", &juice[i]);
    }
    std::sort(pasta.begin(), pasta.end());
    std::sort(juice.begin(), juice.end());
    int result = (pasta[0] + juice[0] - 50);
    printf("%d\n", result);
    return 0;
}