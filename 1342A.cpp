#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// int a[];

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// void input(int n) {
//     for (int i = 0; i <= n; ++i) {
//         cin >> a[i];
//     }
// }

int main() {
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastIO();

    int tc = 0;
    cin >> tc;
    while (tc--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        if (a*2 <= b) {
            cout << (x+y)*a << endl;
        } else {
            cout << (min(x,y)*b) + ((max(x,y)-min(x,y))*a) << endl; 
        }
    }
}