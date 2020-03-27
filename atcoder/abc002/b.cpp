#include <iostream>
#include <string>

using namespace std;

int main(){
    string w;
    cin >> w;
    string result = "";
    for(int i = 0; i < w.length(); i++){
        if(w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o'){
            continue;
        }
        else{
            result += w[i];
        }
    }
    cout << result << endl;
}