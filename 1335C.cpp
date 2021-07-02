#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int freq[1000000];

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
        int n;
        cin >> n;
        
        int x = 0;
        int comSize = 0;
        int uniSize = 0;

        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (freq[x] == 0) {
                ++uniSize;
            } 
            freq[x]++;
            if (freq[x] > comSize) {
                comSize = freq[x];
            }
        }

        int ans = 0;
        ans = min (uniSize, comSize);
        uniSize == comSize? cout << --ans << endl : cout << ans << endl;
        
        memset (freq, 0, sizeof(freq));
    }
}
