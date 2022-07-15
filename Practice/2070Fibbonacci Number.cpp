#include <iostream>
using namespace std;
long long int f[51];
int main() {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 51; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	int n;
	cin >> n;
	while (n != -1) {
		cout << f[n] << endl;
		cin >> n;
	}
	return 0;
}
