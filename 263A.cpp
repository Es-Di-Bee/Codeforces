#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, p;
    for (int i = 1; i <= 25; ++i) {
        scanf("%d", &x);
        if (x == 1) {
            p = i;
        }
    }
    if (p == 1 || p == 5 || p == 21 || p == 25) {
        cout << "4" <<endl;
    } else if (p == 13) {
        cout << "0" <<endl;
    } else if (p == 8 || p == 12 || p == 14 || p == 18) {
        cout << "1" << endl;
    } else if (p == 3 || p == 7 || p == 9 || p == 11 || p == 15 || p == 17 || p == 19 || p == 23) {
        cout << "2" << endl;
    } else {
        cout << "3" << endl;
    }
}
