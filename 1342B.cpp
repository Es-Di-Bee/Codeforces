#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// void input(int n) {
//     for (int i = 0; i <= n; ++i) {
//         cin >> a[i];
//     }
// }

int main() {
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        string t;
        cin >> t;
        bool flag = false;
        for (int i = 0; i < t.size()-1; ++i) {
            if (t[i] != t[i+1]) break;
            if (i == t.size()-2) {
                flag = true;
                cout << t << endl;
            }
        }
        if (flag) continue;

        string str = "";
        for (int i = 0; i < t.size(); ++i) {
            str += t[i];
            if (i == t.size()-1) break;
            if (t[i] == t[i+1]) {
                if (t[i] == '0') str += '1';
                else str += '0';
            }
        }

        cout << str << endl;
    }
}