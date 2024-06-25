#include <iostream>
using namespace std;

int main() {
	int N; //시험 본 과목수
	int scores[1001];
	long max = 0, sum = 0;
	double avg;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> scores[i];
		sum += scores[i];
		if (max < scores[i]) {
			max = scores[i];
		}
	}
	avg = (sum * 100.0 / max ) / N;
	cout << avg << endl;
}