#include<iostream>
using namespace std;
int main()
{
    int n, i;
    char a[12];
    int b[2];
    b[0] = 6;
    cin >> n;
    while (n--)
    {
        cin >> a;
        cout << b[0];
        for (i = 6; i < 11; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
