#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int l, n;
		int mint = 0, maxt = 0;
		cin >> l >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			mint = max(mint, min(arr[i], l - arr[i]));
			maxt = max(maxt, max(arr[i], l - arr[i]));
		}

		cout << mint << ' ' << maxt << endl;
	}
}