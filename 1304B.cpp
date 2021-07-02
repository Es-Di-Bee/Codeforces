#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      int n = 0, m = 0;
      cin >> n >> m;
      int tc = n;
      string waste;
      getline(cin, waste);
	vector<string>v;
	while(tc--) {
		string str;
            getline(cin, str);
            v.push_back(str);
	}
	vector<string>ans1;
	vector<string>ans2;
	int count = 0;
	string mid = "";
	for (int i = 0; i < v.size(); ++i) {
		if(v[i] == "") continue;

		string temp = v[i];
		reverse(v[i].begin(), v[i].end());

		if (temp == v[i]) {
			mid = temp;
			continue;
		}

            for (int k = i+1; k < v.size(); ++k) {
			if (v[i] == v[k]) {
				count += temp.size() + v[i].size();
				ans1.push_back(temp);
				ans2.push_back(v[i]);
				v[k] = "";
				break;
			}
            }
	}
	cout << (count + mid.size()) << endl;
	for (int i = 0; i < ans1.size(); ++i) {
		cout << ans1[i];
	}
	cout << mid;
	for (int i = ans2.size()-1; i >= 0; --i) {
		cout << ans2[i];
	}
	cout << endl;
}

