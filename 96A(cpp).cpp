#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int count = 1;
    bool flag = false;
    for (int i = 0; i < str.size()-1; ++i) {
        if (str[i] == str[i+1]) {
            ++count;
            if (count == 7) {
                flag = true;
                break;
            }
            continue;
        } else {
            count = 1;
        }
    }
    if (flag == true) {
        printf("YES");
    } else {
        cout << "NO" <<endl;
    }
}
