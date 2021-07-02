#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000];
int b[1000];

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
    while(tc--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            cin >> b[i];
        }
        
        int prevA = -1, prevB = -1;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] >= prevA && b[i] >= prevB && b[i]-prevB <= a[i]-prevA) {
                prevA = a[i]; prevB = b[i];
            } else {
                cout << "NO" << endl;
                break;
            }
            if (i == n-1) cout << "YES" << endl;
        }
    }
}


 