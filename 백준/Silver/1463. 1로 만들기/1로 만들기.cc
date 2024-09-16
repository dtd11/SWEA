#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int n, D[1000005];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	D[1] = 0;
	for (int i = 2; i <=n; ++i) {
		D[i] = D[i - 1] + 1;
		if (i % 2 == 0) D[i] = min(D[i], D[i / 2] + 1);
		if (i % 3 == 0) D[i] = min(D[i], D[i / 3] + 1);
	}
	cout << D[n] << '\n';
	return 0;
}