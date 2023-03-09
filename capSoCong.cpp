#include <bits/stdc++.h>

//khởi tạo tên vùng
using namespace std;

int main()
{
    long long a[4];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    // tìm giá trị chênh lệch
    long long spaceT = min(a[1] - a[0], a[2] - a[1]);

    for (long long i = 0; i < 3; i++)
    {
        if (a[i] + spaceT != a[i + 1])
        {
            // tìm kết quả
            cout << a[i] + spaceT;
            return 0;
        }
    }
}
