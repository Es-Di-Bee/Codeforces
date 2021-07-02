#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a[1000000];
vector<int> v;
int idx;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void input(int n) {
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
}

int main() {
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastIO();

    int tc = 0;
    cin >> tc;
    while (tc--) {
        ll n = 0, k = 0;
        cin >> n >> k;

        input(n);

        for (int i = 2; i <= n-1; ++i) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) v.push_back(i);
        }
        idx = 0;
        if (v.size() == 0) {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        int maxPeak = 0, curPeak = 0, firstPeak = v[idx++];

        for (int i = 2; i <= k-1; ++i) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) {
                ++curPeak;
            }
        }
        maxPeak = max(maxPeak, curPeak);
        int leftBorder = 1;

        for (int l = 2, r = k; r <= n-1; ++l, ++r) {
            if (a[r] > a[r-1] && a[r] > a[r+1]) {
                ++curPeak;
            }
            if (l == firstPeak) {
                --curPeak;
                if (idx == v.size()) break; 
                firstPeak = v[idx++];
            }
            if (curPeak > maxPeak) {
                maxPeak = curPeak;
                leftBorder = l;
            }
        }

        cout << maxPeak+1 << " " << leftBorder << endl;
        v.clear();
    }
}