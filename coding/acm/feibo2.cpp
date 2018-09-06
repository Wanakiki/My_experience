#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
long long a[50003];
int main()
{
    int t, b, c;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> b >> c;
        n = c - b;
        a[1] = 1;
        a[2] = 2;
        if (n > 2)
        {
            for (int i = 3; i <= n; i++)
                a[i] = a[i - 1] + a[i - 2];
        }
        cout << a[n] << endl;
    }
    return 0;
}