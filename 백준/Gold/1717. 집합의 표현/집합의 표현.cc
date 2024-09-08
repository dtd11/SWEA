#include<stdio.h>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<queue>
#include<memory.h>
using namespace std;

int n, m, a, b, tmp;
int parent[1000002];

int find(int x) {
	if (parent[x] == x) return x;
	return parent[x] = find(parent[x]);
}

void union_set(int p, int q) {
	int x = find(p);
	int y = find(q);
	if(x!=y) parent[max(x, y)] = min(x, y);
}

void is_sameset(int pp, int qq) {
	if (find(pp) == find(qq)) {
		cout << "YES\n";
	}
	else cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	memset(parent, 0, sizeof parent);
	for (int i = 0; i <= n; ++i) {
		parent[i] = i;
	}
	for (int i = 0; i < m; ++i) {
		cin >> tmp >> a >> b;
		if (tmp == 0) {
			union_set(a, b);
		}
		else if (tmp == 1) {
			is_sameset(a, b);
		}
	}
	
}