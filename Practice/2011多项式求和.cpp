#include<iostream>
#include<iomanip>       
using namespace std;
int main()
{
    int n[100];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> n[i];
    for (int i = 0; i < m; i++)
    {
        double sum = 0;
        for (int j = 1; j <= n[i]; j++)
        {
            if (j % 2 == 0)
                sum = sum - 1 / double(j);
            else
                sum = sum + 1 / double(j);
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}
