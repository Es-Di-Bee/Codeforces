#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int a = 0;
	int d = 0;
	for (char c : str) {
		if (c == 'A') ++a;
		else ++d;
	}
	if (a > d) cout << "Anton" << endl;
	else if (d > a) cout << "Danik" << endl;
	else cout << "Friendship" << endl;
}
