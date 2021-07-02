#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int tc = 0;
      cin >> tc;
      ll x, y , a , b;
      while (tc--) {
		cin >> x >> y >> a >> b;
		ll dif = y - x;
		ll sum = a + b;
            if (dif % sum == 0) cout << (dif / sum) << endl;
            else cout << -1 << endl;
      }
}

