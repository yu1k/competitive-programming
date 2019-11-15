//解説通りの実装
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int S[3] = {a, b, c};
    sort(S, S+3);
    cout << S[1] << endl;
}


//先生が教えてくれた実装
//こっちの方が応用がききそう
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> S(3);
    for(int i = 0; i < 3; i++){
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    cout << S[1] << endl;
}
