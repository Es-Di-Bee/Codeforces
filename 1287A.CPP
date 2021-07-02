#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t = 0;
	cin >> t;
	string str = "";
	getline(cin, str);
	while (t--) {
		int temp;
		cin >> temp;
		getline(cin, str);
		int ans = 0;
		getline(cin, str);
		int count = 0;
		bool aPresent = false;

            for (int i = 0; i < str.size(); ++i) {
                  if ( str[i] == 'A' ) {
				aPresent = true;
				ans = max(count, ans);
				count = 0;
                  } else if (aPresent) {
                  	++count;
                  	if (i == str.size()-1) ans = max(count, ans);
                  }
            }
            cout << ans << endl;
	}
}
