#include <iostream>

using namespace std;

int white = 0;
int blue = 0;
bool arr[128][128] = { false, };

void cutting(int x, int y, int size) {
	for (int i = x; i < x + size; ++i) {
		for (int j = y; j < y + size; ++j) {
			if (arr[x][y] != arr[i][j]) {
				cutting(x, y, size / 2);
				cutting(x + size / 2, y, size / 2);
				cutting(x, y + size / 2, size / 2);
				cutting(x + size / 2, y + size / 2, size / 2);
				return;
			}
		}
	}
	if (arr[x][y]) blue++;
	else white++;
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// BFS가 아닐까?
	// 재귀?
	// DFS도 될듯?
  	// 결국 재귀로 품

	int n, input;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> input;
			arr[i][j] = input;
		}
	}

	cutting(0, 0, n);

	cout << white << '\n' << blue;

	return 0;
}
