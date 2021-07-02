#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc = 0;
	string str = "";
	cin >> tc;
	while(tc--) {
		str = "";
		str += "R";
		string inpt;
		cin >> inpt;
		str += inpt + "X";
		int count = 0;
		int ans = 0;

		for (int i = str.size()-1, j = str.size()-1; i >= 0; --i, count = 0) {
			if (str[i] == 'R') {
				count = j - i;
				j = i;
			}
			ans = max(ans, count);
		}
		cout << ans << endl;
	}

	return 0;
}
