#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, a[100];
    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i]) < abs(a[j]))
                {
                    int c = a[i];
                    a[i] = a[j];
                    a[j] = c;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                cout << " ";
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
