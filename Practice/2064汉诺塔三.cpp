#include <iostream>
#include<cstdio>
using namespace std;
long long num;

int main()
{
    int n;
    while (cin >> n)
    {
        num = 0;
        for (int i = 1;i <= n;i++)
            num = num * 3 + 2;
        cout << num << endl;
    }
    return 0;
}
