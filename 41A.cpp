#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	string ans = "";
	for (int i = str.size()-1; i >= 0; --i) {
		ans += str[i];
	}
	string str2;
	cin >> str2;
	if (str2 == ans) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
