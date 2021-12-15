#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	// 계단의 개수 주어지고, 그 아래는 계단 점수!
	// DP (Bottom-up)

	int n, stair;
	int stairs[300] = { 0, };
	int dp[300] = { 0, };

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> stair;
		stairs[i] = stair;
		if (i == 0) dp[0] = stair;
		else if (i == 1) dp[1] = stairs[0] + stair;
		else if (i == 2) dp[2] = max(stairs[0], stairs[1]) + stair;
		// 전칸을 밟는 경우와 안밟는 경우로 나눠서 생각하자
		// 전칸을 밟으면 전전칸은 무조건 안밟아야 하므로 dp[i-3] + stairs[i-1] + stair
		// 전칸을 안밟으면 dp[i-2] + stair
		else dp[i] = max(dp[i - 3] + stairs[i - 1], dp[i - 2]) + stair;
	}

	cout << dp[n - 1];

	return 0;
}
