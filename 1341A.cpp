#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastIO();

    int tc = 0;
    cin >> tc;
    while (tc--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int mnpgw = a - b, mxpgw = a + b, y = c - d, z = c + d;
        int w = n * mnpgw, x = n * mxpgw;

        if ( (w >= y && w <= z) || (x >= y && x <= z) || (y >= w && y <= x) || (z >= w && z <= x) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}