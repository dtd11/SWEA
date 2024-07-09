#include<iostream>
#include<set>

using namespace std;
set<int> nums;
int tmp;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		nums.insert(tmp);
	}

	for (auto it = nums.begin(); it != nums.end(); it++) {
		cout << *it << '\n';
	}
}