#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s, t;

	cin >> n;
	for (int i = 0; i < n; i++) {
		char tmp;
		cin >> tmp;
		s.push_back(tmp);
	}

	for (int i = 0; i < n; i++) {
		if (i != 0 && i % 80 == 0) cout << "\n";
		int length = s.length();
		int first = 0, end = length - 1;
		int isfirst = 0;
		while (first <= end) {
			if (s[first] < s[end]) { // 첫번째 글자가 사전순으로 빠름
				isfirst = 1;
				break;
			}
			else if (s[first] > s[end]) { // 마지막 글자가 사전순으로 빠름
				break;
			}
			else {
				first++;
				end--;
			}
		}
		if (isfirst) {
			cout << s[0];
			s.erase(0, 1);
		}
		else {
			cout << s[s.length() - 1];
			s.pop_back();
		}
	}
}