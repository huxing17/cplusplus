#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	int T, i, j, n, m, min, a;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> n >> m;
		for (j = 1; j <= n; j++) {
			cin >> a;
			if (j == 1) {
				min = a;
			}
			else {
				if (a < min) {
					min = a;
				}
			}
		}
		printf("%d\n", int(pow(100 - min, 2.0)));
	}
	return 0;
}
