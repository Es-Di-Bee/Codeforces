#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size 200005

ll a[size];
bool b[size];
ll ans[4] = {0};
ll n;
int idx;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll part1(int i) {
	fill_n(b, n+5, false);
	ll sum = 0, mx = 0;
	ll count = 0;

	for (; i < n; ++i) {
		if (b[a[i]] == false) b[a[i]] = true;
		else break;
		++count;
		mx = max(mx, a[i]);
	}

	idx = i;
	if (mx == count) return count;
	return 0;
}

ll part2(int i) {
	fill_n(b, n+5, false);
	ll sum = 0, mx = 0;
	ll count = 0;

	for (; i >= 0; --i) {
		if (b[a[i]] == false) b[a[i]] = true;
		else break;
		++count;
		mx = max(mx, a[i]);
	}

	idx = i;
	if (count == mx) return count;
	return 0;
}

void print() {
	int q = 0;

	for (int i = 0; i < 4; i+=2) {
		if (ans[i] + ans[i+1] == n && ans[i] != 0 && ans[i+1] != 0) {
			++q;
		}
	}

	if (q == 1) {
		if (ans[2] == 0 || ans[3] == 0) cout << 1 << endl <<  ans[0] << " " << ans[1] << endl;
		else cout << 1 << endl <<  ans[3] << " " << ans[2] << endl;
	}
	if (q == 2) {
		if (ans[0] == ans[3] && ans[1] == ans[2])  cout << 1 << endl <<  ans[0] << " " << ans[1] << endl;
		else cout <<2 << endl <<  ans[0] << " " << ans[1] << endl << ans[3] << " " << ans[2] << endl;
	}
	if (q == 0) cout << 0 << endl;
}

int main() {
    	fastIO();

      int tc = 0;
      cin >> tc;

      while(tc--) {
            cin >> n;

            for (int i = 0; i < n; ++i) {
                  cin >> a[i];
            }

            if (n == 2) {
			if (a[0] == 1 && a[1] == 1) cout << 1 << endl << 1<< " " << 1<< endl;
			else cout << 0 << endl;
			continue;
            }

            ans[0] = part1(0);
            ans[1] = part1 (idx);
            ans[2] = part2(n-1);
            ans[3] = part2(idx);

            print();
      }
}

