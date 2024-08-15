#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>

typedef long long ll;

using namespace std;

ll binary_search(ll n) {
	ll start = 1;
	ll end = sqrt(2 * n); // K*K < K(K+1) = 2N 이므로 양변에 루트를 씌워도 성립, K < 루트 2N이 딱 상한선에 맞는지 모르겠지만 상관x
	ll mid;

	while (start <= end) {
		mid = (start + end) / 2;
		ll num = ((mid*(mid + 1))
			/ 2);
		if (n > num) {
			start = mid + 1;
		}
		else if (n == num) {
			return mid;
		}
		else
			end = mid - 1;
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		ll x;
		cin >> x;
		cout << "#" << i << " " << binary_search(x) << '\n';
	}
	return 0;
}