#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long mn = b[0];
        bool ok = true;

        for (int i = 1; i < n; i++) {
            if (b[i] >= 2 * mn) {
                ok = false;
                break;
            }
            mn = min(mn, b[i]);
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
