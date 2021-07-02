#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string demo = "hello";
    int count = 0;
    int j = 0;
    for (int i = 0; i < demo.size(); ++i) {
        for (; j < str.size(); ++j) {
            if (demo[i] == str[j]) {
                str[j] = '0';
                j++;
                ++count;
                break;
            }
        }
    }
    if (count == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}
