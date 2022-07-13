#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char name[31];
	double C, S;
	int N, M, i, p;
	double score, sum;
	cin >> N;
	while (N--) {
		p = 0;
		score = 0; sum = 0;
		cin >> M;

		for (i = 0; i < M; i++) {
			cin >> name >> C >> S;
			score += C * S;
			sum += C;
			if (S < 60) {
				p = 1;
			}
		}
		if (p == 1) cout << "Sorry!" << endl;
		else {
			score = score * 1.0 / sum;
			cout << fixed << setprecision(2) << score << endl;
		}
		if (N != 0) cout << endl;
	}
	return 0;
}
