// 백준 10451 순열 사이클

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int graph[1001];
int visited[1001];
vector<int> ans;
int T, N;

void dfs(int n) {
	visited[n] = 1;
	if (visited[graph[n]] == 0) {
		dfs(graph[n]);
	}
	else return;
}

int main() {
	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> N;
		int cnt = 0;

		for (int i = 1; i <= N; i++) {
			cin >> graph[i];
		}

		for (int i = 1; i <= N; i++) {
			if (visited[i] == 0) {
				dfs(i);
				cnt++;
			}
		}
		memset(graph, 0, sizeof(graph));
		memset(visited, 0, sizeof(visited));

		ans.push_back(cnt);
	}

	for (int t = 0; t < T; t++) {
		cout << ans[t] << endl;
	}

	return 0;
}