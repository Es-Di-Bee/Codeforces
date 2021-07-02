#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 0;
    cin >> tc;
    while (tc--) {
        ll n, p, k;
        cin >> n >> p >>k;
        ll a[n+1] = {0};
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
        ll ans = 0;
        ll b[n+1] = {0};

        for (int i = 1; i <= n; ++i) {
            if (i < k) {
                b[i] = a[i] + b[i-1];
            } else {
                b[i] = a[i] + b[i-k];
            }

            if (b[i] <= p) {
                ans = i;
            }
        }
        cout << ans << endl;
    }
}
