#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        int n = 0;
        cin >> n;
        string str;
        cin >> str;
        string a = "1";
        string b = "1";
        for (int i = 1; i < str.size(); ++i) {
            if (str[i] == '2') {
                if (a <= b) {
                    a += '1';
                    b += '1';
                } else {
                    a += '0';
                    b += '2';
                }
            } else if (str[i] == '1') {
                if (a <= b) {
                    a += '1';
                    b += '0';
                } else {
                    a += '0';
                    b += '1';
                }
            } else {
                a += '0';
                b += '0';
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
}
