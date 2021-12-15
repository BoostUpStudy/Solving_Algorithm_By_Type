#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// BFS
	bool chk[1001] = { false, };
	bool connect[1001][1001] = { false, };

	int n, m, input1, input2;
	int answer = 0;

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> input1 >> input2;
		connect[input1][input2] = true;
		connect[input2][input1] = true;
	}

	for (int i = 1; i <= n; ++i) {
		if (!chk[i]) {
			answer++;

			queue<int> q;
			q.push(i);
			chk[i] = true;
			while (!q.empty()) {
				int tmp = q.front();
				q.pop();
				for (int j = 1; j <= n; ++j) {
					if (connect[tmp][j] && !chk[j]) { // 어짜피 양방향 그래프라 반대쪽 생각할 필요가 없다
						chk[j] = true;
						q.push(j);
					}
				}
			}
		}
	}

	cout << answer;

	return 0;
}
