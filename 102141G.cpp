#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	for(int t = 1; t <= tc; ++t) {
		string str = "";
		int n;
		cin >> n;
		while(n--) {
			int x;
			cin >> x;
			if (x & 1) {
				if (str != "") str += '0';  
			} else {
				str += '1';
			}
		}
		cout << "Case " << t << ": " << str << '\n';
	}
}