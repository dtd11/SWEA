#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int sum[100001] = {};
	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		sum[i] = sum[i - 1] + num;
	}
	for (int j = 0; j < M; j++) {
		int a, b;
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << "\n";
	}
}