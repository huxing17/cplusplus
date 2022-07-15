#include<iostream>
using namespace std;
int main()
{
    long long int f[21] = { 0,1 };
    int i, n, T;
    for (i = 2;i <= 20;i++)
    {
        f[i] = 3 * f[i - 1] + 1;
    }
    cin >> T;
    while (T--)
    {
        while (cin >> n)
        {
            cout << 2 * f[n - 1] + 2 << endl;
        }
    }
    return 0;
}
