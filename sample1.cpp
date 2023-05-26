#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    t = "入力された文字は、";
    cout << "文字列を入力：";
    cin >> s;
    cout << t + s << "ですよ。" << endl;
    return 0;
}