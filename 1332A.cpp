#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {

}

int main() {
    fastIO();

    int tc = 0;
    cin >> tc;
    while(tc--) {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll x,y,x1,y1,x2,y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        bool xAxis = false;
        bool yAxis = false;
        bool zeroCaseX = false;
        bool zeroCaseY = false;

        if (x-a+b >= x1 && x-a+b <= x2) xAxis = true;
        if (y-c+d >= y1 && y-c+d <= y2) yAxis = true;
        if (a+b == 0 || x1 != x2) zeroCaseX = true;
        if (c+d == 0 || y1 != y2) zeroCaseY = true;

        if (xAxis && yAxis && zeroCaseX && zeroCaseY) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}