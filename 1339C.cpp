#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[100010];

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print() {
    
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;

    while (tc--) {
        int n = 0;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        ll mx = a[0];

        for (int i = 0; i < n; ++i) {
            if (a[i] > mx) mx = a[i];
            ll dif = mx - a[i];
            int count = 0;
            while (dif > 0) {
                dif /= 2;
                ++count;
            }
            ans = max (ans, count);
        }

        cout << ans << endl;
    }
}