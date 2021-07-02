#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 0;
    cin >> tc;
    while (tc--) {
        long long a, b, c, r;
        cin >> a >> b >> c >> r;
        if (a > b) {
            ll temp = a;
            a = b;
            b = temp;
        }

        ll totDis = 0;
        ll rCov = c + r;
        ll lCov = c - r;
        ll remDis = 0;

        if (r == 0) {
            totDis = abs(a-b);
        } else if (lCov > b || rCov < a) {
            totDis = abs(a-b);
        } else {
            if (lCov > a) {
                totDis += abs(a-lCov);
                if (rCov < b) {
                    totDis += abs(b-rCov);
                }
            } else {
                if (rCov < b) {
                    totDis += abs(b-rCov);
                }
            }
        }

        cout << totDis << endl;
    }
}
