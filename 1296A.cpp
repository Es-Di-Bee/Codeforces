#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int tc, n;
      cin >> tc;
      while (tc--) {
		cin >> n;
      	int a[n] = {0};
      	for (int i = 0; i < n; ++i) {
			cin >> a[i];
      	}
      	int oC = 0, eC = 0;
      	for (int i = 0; i < n; ++i) {
			if (a[i] &1 == 1) ++oC;
			else ++eC;
      	}
		if (oC &1 == 1 || (eC > 0 && oC > 1)) cout << "YES" << endl;
		else cout << "NO" << endl;
      }
}
