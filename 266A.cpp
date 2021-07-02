#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;
	string str;
	cin >> str;
	int ans = 0;
	for (int i = 0; i < str.size()-1; ++i) {
		if (str[i] == str[i+1]) ++ans;
	}
	cout << ans << endl;
}
