#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    string s;
    cin >> s;
    int sum = 0;
    int result = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i - 2] == 'I' && s[i - 1] == 'O' && s[i] == 'I'){
            i++;
            sum++;
            if(n <= sum){
                result++;
            }
        }
        else{
            sum = 0;
        }
    }
    cout << result << endl;
}
