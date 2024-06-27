#include <iostream>

using namespace std;
int S[1206][1206] = { 0 }; // i,j까지 합

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int temp; // 행렬 값

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            cin >> temp;
            S[i][j] = S[i - 1][j] + S[i][j - 1] + temp - S[i - 1][j - 1]; // S[i][j]에 (0, 0) ~ (i-1, j-1)까지 합 저장
        }
    }

    int x1, y1, x2, y2;

    for (int i = 0; i < m; i++) {
        int result = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        result = S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 - 1] + S[x1 - 1][y1 - 1];
        cout << result << '\n';
    }

    return 0;
}
