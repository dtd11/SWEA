#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[101][101];
int visited[101][101];
int dist[101][101];

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };

queue<pair<int, int>> q;

void bfs(int x, int y) {
	
	visited[x][y] = 1;
	q.push(make_pair(x, y));
	dist[x][y] = 1;

	while (!q.empty()) {
		int sx = q.front().first;
		int sy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = sx + dx[i];
			int ny = sy + dy[i];
			if (nx >= 0 && nx < N && ny >= 0 && ny < M && visited[nx][ny] == 0 && arr[nx][ny] == 1) {
				visited[nx][ny] = 1;
				q.push(make_pair(nx, ny));
				dist[nx][ny] = dist[sx][sy] + 1;
			}
		}
	}

}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string row;
		cin >> row;

		for (int j = 0; j < M; j++) {
			arr[i][j] = row[j] - '0';
		}
	}
	bfs(0, 0);

	cout << dist[N - 1][M - 1];
}
