#include<iostream>
#include<math.h>
using namespace std;
int ss(int n)
{
    if (n == 2 || n == 3)
        return 1;
    for (int i = 2;i <= sqrt(n);i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while (cin >> n)
    {
        int jg = 0;
        if (n == 0)
            break;
        for (int j = 2;j < n / 2;j++)
        {
            if (ss(j) && ss(n - j))
                jg++;
        }
        cout << jg << endl;
    }
}
