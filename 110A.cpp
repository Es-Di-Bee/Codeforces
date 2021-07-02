#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int count = 0;
	for (char c : str) {
		if (c == '4' || c == '7') {
			++count;
		}
	}
	if (count == 4 || count == 7) cout << "YES" << endl;
	else cout << "NO" << endl;
}
