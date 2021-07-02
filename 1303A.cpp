
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc = 0;
	cin >> tc;
	string str;
	getline(cin,str);
	while(tc--) {
		int ans = 0;
		int count = 0;
		getline(cin,str);
		bool flag = false;
            for (int i = 0; i < str.size(); ++i) {
                  if(str[i] == '1' && flag == false) {
                        flag = true;
                        continue;
                  }
                  if (flag) {
				while(str[i] == '0') {
                              ++count;
                              ++i;
                              if (i == str.size()) count = 0;
				}
				ans += count;
				count = 0;
                  }
            }
            cout << ans << endl;
	}
}
