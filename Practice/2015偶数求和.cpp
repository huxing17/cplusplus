#include<iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int sum = 0;
        int number = 0;
        for (int i = 2; i <= 2 * n; i += 2)
        {
            sum += i;
            number++;
            if (number == m || i == 2 * n)
            {
                cout << sum / number;
                if (i == 2 * n)
                    cout << endl;
                else
                    cout << " ";
                sum = number = 0;
            }
        }
    }
    return 0;
}
