#include <iostream>
using namespace std;

int main()
{
    int a[50] = { 0,1,4 };
    int x, b;
    while (cin >> x)
    {
        b = 3;
        for (int i = 1; i <= x; i++)
        {
            a[i + 1] = a[i] + b;
            b *= 2;
        }
        cout << a[x] << endl;
    }
    return 0;
}
