#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print() {
    
}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while (tc--) {
        int n, a, b;
        cin >> n >> a >> b;
        string alp = "abcdefghijklmnopqrstuvwxyz";
        string str = "";
        int j = 0;

        for (int i = 0; i < a; ++i) {
            if (i <= (a-b)) {
                str += alp[j];
                continue;
            }  
            ++j;
            str += alp[j];
        }

        j = 0;
        string ans = "";
        for (int i = 0; i < n-a; ++i) {
            ans += str[j];
            ++j;
            if (j == str.size()) j = 0;
        }

        str += ans;

        cout << str << endl;
    }
}
