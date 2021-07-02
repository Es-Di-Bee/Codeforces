#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

      int tc = 0;
      cin >> tc;
      long long n, s;
      for (int t = 1; t <= tc; ++t) {

		cin >> n >> s;
            long long a[n] = {0};
            for (int i = 0 ; i < n; ++i) {
			cin >> a[i];
            }

            long long total = 0 ,max = 0;
            int index = 0;

		if (n == 1) {
			if (s < a[0]) cout << "1" << endl;
			else cout << "0" << endl;
		} else {
            	for (int i = 0; i < n; ++i) {
                        if (total > s) {
                              cout << index+1 << endl;
                              break;
                        }
                        if (total == s) {
                              if (i == n-1) {
                                    cout << "0" << endl;
                                    break;
                              }
                              if (a[i] < max) {
						cout << index+1 << endl;
						break;
                              } else {
                                    cout << i+1 << endl;
                                    break;
                              }
                        }
                        else {
                            total += a[i];
                            if (a[i] > max) {
                                max = a[i];
                                index = i;
                            }
                            if (i != n-1) continue;
                            else {
                                if (total <= s) cout << "0" << endl;
                                else cout << n << endl;
                            }
                        }

            	}
		}
      }
}
