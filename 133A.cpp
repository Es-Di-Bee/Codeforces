#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		char c = str[i];
		if (c == 'H' || c == 'Q' || c == '9') {
			cout << "YES" << endl;
			break;
		}
		if (i == str.size() - 1) cout << "NO" << endl;
	}
}
