#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a[4];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    long long spaceT = min(a[1] - a[0], a[2] - a[1]);

    for (long long i = 0; i < 3; i++)
    {
        if (a[i] + spaceT != a[i + 1])
        {
            cout << a[i] + spaceT;
            return 0;
        }
    }
}