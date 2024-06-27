#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	//2차원 배열 생성
	vector<vector <int>> dp(n + 1);
	for (int i = 0; i <= n; i++) {
		vector<int>inner(m + 1);
		for (int j = 0; j <= m; j++) {
			inner[j] = 0;
		}
		dp.push_back(inner);
	}

	string s, t;
	cin >> s >> t;

	//dp[n][m]이 LCS의 길이를 반환하도록 O(n^2)의 루프 수행
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (s[i] == t[j]) {
				dp[i + 1][j + 1] = dp[i][j] + 1;
			}
			else {
				dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
			}
		}
	}

	//LCS의 길이를 출력
	cout << dp[n][m];
}