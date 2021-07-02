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
        ll n;
        cin >> n;

        ll div = n / 2;
        if (div % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        ll evenSum = 0;
        ll even = 2;
        for (int i = 1; i <= div; ++i, even += 2) {
            cout << even << " ";
            evenSum += even;
        }
        ll oddSum = 0;
        ll odd = 1;
        for (int i = 1; i < div; ++i, odd += 2) {
            cout << odd << " ";
            oddSum += odd; 
        }
        // cout << "OK " << evenSum << endl;
        cout << evenSum - oddSum << endl; 
        
    }

}
