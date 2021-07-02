#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int tc = 0;
      cin >> tc;
      while (tc--) {
		ll n = 0;
		cin >> n;
            vector<ll>v;
		ll remain = 0, spend = 0;
		while (n > 9) {
                  remain = n % 10;
                  spend = n - remain;
                  v.push_back(spend);
                  n = remain + (spend/10);
		}
		v.push_back(n);
		ll ans = 0;
		for (int i = 0; i < v.size(); ++i) {
			ans += v[i];
		}
		cout << ans << endl;
      }
}
