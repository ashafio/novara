#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt = 0;
    for (char c : n)
        if (c == '4' || c == '7')
            cnt++;

    string s = to_string(cnt);
    for (char c : s)
        if (c != '4' && c != '7') {
            cout << "NO";
            return 0;
        }

    cout << "YES";
    return 0;
}
