#include <iostream>
using namespace std;
int main() {
    int a[6] = { 100, 50, 10, 5, 2, 1 };
    int T;
    cin >> T;
    while (T) {
        int count = 0;
        for (int i = 1; i <= T; i++) {
            int n;
            cin >> n;
            for (int j = 0; j < 6; j++) {
                while (n >= a[j]) {
                    n -= a[j];
                    count++;
                }
            }
        }
        cout << count << endl;
        cin >> T;
    }
    return 0;
}
