#include<iostream>
using namespace std;
int main() {
	static char f;
	static int n;
	static bool Space = false;
	while (cin >> f, f != '@') {
		cin >> n;
		if (Space == false)Space = true;
		else cout << endl;
		if (n == 1) {
			cout << f << endl;
			continue;
		}
		for (int i = 0;i < n - 1;++i)cout << ' ';
		cout << f << endl;
		for (int i = 1;i < n - 1;++i) {
			for (int j = 1;j < n - i;++j)cout << ' ';
			cout << f;
			for (int j = 0;j < i * 2 - 1;++j)cout << ' ';
			cout << f << endl;
		}
		for (int i = 0;i < n * 2 - 1;++i)cout << f;
		cout << endl;
	}
	return 0;
}
