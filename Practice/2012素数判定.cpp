#include<iostream>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y && (x != 0 || y != 0))
    {
        int number = 0;
        for (int i = x; i <= y; i++)
        {
            int a = i * i + i + 41;
            for (int j = 2; j < a / 2; j++)
            {
                if (a % j == 0)
                {
                    number++;
                    break;
                }

            }
        }
        if (number == 0)
            cout << "OK" << endl;
        else
            cout << "Sorry" << endl;
    }
    return 0;
}
