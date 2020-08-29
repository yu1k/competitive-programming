#include <iostream>
#include <vector>

using namespace std;

vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

bool isOK(int index, int key){
    if(a[index] >= key){
        return true;
    }
    else{
        return false;
    }
}

int meguru_style_binary_search(int key){
    int ng = -1;
    int ok = (int)a.size();

    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        if(isOK(mid, key)){
            ok = mid;
        }
        else{
            ng = mid;
        }
    }
    return ok;
}

int main(){
    cout << meguru_style_binary_search(1) << endl;
    return 0;
}
