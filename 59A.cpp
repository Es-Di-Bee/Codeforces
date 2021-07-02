#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	int upNum = 0;
	int lowNum = 0;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 97) ++ lowNum;
		else upNum++;
	}
	if (lowNum >= upNum) {
		for (int i = 0; i < str.size(); ++i) {
			cout << char(tolower(str[i]));
		}
	} else {
		for (int i = 0; i < str.size(); ++i) {
			cout << char(toupper(str[i]));
		}
	}
	cout << endl;
}
