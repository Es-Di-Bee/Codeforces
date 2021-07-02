#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    string str;
    getline(cin, str);
    if (str == "1000000000") {
        cout << 8888888899 << endl;
    } else {
        ll a[] = {9,180,2700,36000,450000,5400000,63000000,720000000};
        ll sum = 0;
        int length = str.size();
        for (int i = 0; i < length-1; ++i) {
            sum += a[i];
        }
        ll number = stoll(str);
        ll lowerRange = 1;
        for (int i = 1; i < length; ++i) {
            lowerRange *= 10;
        }
        sum += ( (number-lowerRange+1) * length );
        printf("%lld\n", sum);
    }
}
