#include <bits/stdc++.h>

using namespace std;

int k, doable = 0, min_count = 100001;

void solve(vector<int> arr, int i, int n, int sum, int count) {
	if (i == n) {
		return;
	}
	sum += arr[i];
	count++;
	if (sum == k) {
		if (doable == 0) doable = 1;
		if (count < min_count) min_count = count;
	}

	cout << "added " << "arr[" << i << "]" << endl;
	cout << "current min_count: " << min_count << endl;
	solve(arr, i + 1, n, sum, count);
	return;
}

int main() {
	int n;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		solve(arr, i, n, 0, 0);
		cout << min_count << endl;
	}

	if (doable) {
		cout << min_count;
	}
	else {
		cout << 0;
	}
}