#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777,1001};
    int x;
    cin >> x;
    if (binary_search(a, a+15, x)) {
        cout << "YES" << endl;
    } else {
        for (int i = 0; i < 15; ++i) {
            if (a[i] > x) {
                cout << "NO" << endl;
                break;
            }
            if (x % a[i] == 0) {
                cout << "YES" << endl;
                break;
            }
        }
    }
}
