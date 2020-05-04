#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, int> m{};

    cout << m.size() << endl; //なにおも要素を追加してないので0が出力される
    cout << m[1] << endl; //要素は存在しないので、自動で0が追加される
    cout << m.size() << endl; //自動で要素が追加されているので1と出力される
}