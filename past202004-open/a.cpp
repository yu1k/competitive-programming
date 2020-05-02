#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    vector<string> str = {"B9", "B8", "B7", "B6", "B5", "B4", "B3", "B2", "B1", "1F", "2F", "3F", "4F", "5F", "6F", "7F", "8F", "9F"};
    int num_s = 0;
    int num_t = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == s){
            num_s = i;
        }
        if(str[i] == t){
            num_t = i;
        }
    }
    cout << abs(num_s - num_t) << endl;
}