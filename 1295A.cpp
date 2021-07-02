#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int tc = 0,  n = 0;
      cin >> tc;
      while(tc--) {
		cin >> n;
            if (n == 2) cout << "1" << endl;
            else if (n == 3) cout << "7" << endl;
            else if(n == 4) cout << "11" << endl;
            else if (n == 5) cout << "71" << endl;
            else {
                  if (n % 2 == 0) {
				for (int i = 1; i <= n / 2; ++i) {
					cout << "1";
				}
				cout << endl;
                  } else {
                  	cout << "7";
				for (int i = 1; i <= ((n-3) / 2); ++i) {
					cout << "1";
				}
				cout << endl;
                  }
            }
      }
}


