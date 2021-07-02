#include<bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    	fastIO();

      int tc = 0;
      cin >> tc;
      while(tc--) {
		int n, x;
		cin >> n >> x;
		bool a[1000]= {false};
		int val;
		for (int i = 0; i < n; ++i) {
			cin >> val;
			a[val] = true;
		}
		int ans = 0;
            for (int i = 1; i < 1000; ++i) {
			if (x == 0) break;
                  if (a[i] == false) {
                        a[i] = true;
                        --x;
                        ans = i;
                  }
            }

            for (int i = ans+1; i < 1000; ++i) {
                  if (a[i] == true) ++ans;
                  else break;
            }
            cout << ans << endl;
      }
}

