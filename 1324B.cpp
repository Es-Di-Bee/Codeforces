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
        int b[5005] = {0};
        memset(b, -1, sizeof(b));

        for (int i = 0; i < n; ++i) {
            if (b[a[i]] == -1) b[a[i]] = i;
        }

        for (int i = n-1; i >= 0; --i) {
            if ((b[a[i]]!= -1) && (i-b[a[i]] >= 2)) {
                cout << "YES" << endl;
                break;
            }
            if (i == 0) cout << "NO" << endl;
        }
    }
}
