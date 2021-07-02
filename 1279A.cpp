#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

      int tc = 0;
      cin >> tc;
      long long r, b, g;
      while (tc--) {
		cin >> r >> b >> g;
            long long a[3] = {r, b, g};
            sort (a, a+3);
            if (a[0] + a[1] >= a[2]-1) {
			cout << "Yes" << endl;
            } else {
            	cout << "No" << endl;
            }
      }
}
