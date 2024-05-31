#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	string nums;
	cin >> nums;
	
	int sum = 0;

	for (int i = 0; i < nums.length(); ++i) {
		sum += nums[i] - '0';
	}

	cout << sum << endl;
}