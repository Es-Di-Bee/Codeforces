#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        int n = 0;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool flag = false;
        bool even = false;

        if (a[0] % 2 == 0) even = true;

        for (int i = 1; i < n; ++i) {
            if (even && a[i]%2==0) {
                continue;
            } else if (even == false && a[i]%2 != 0) {
                continue;
            }
            else {
                flag = true;
                break;
            }
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
