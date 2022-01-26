#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x)
{
    // 暂存 x
    int temp = x;
    if (x < 0)
        return false;
    int res = 0;
    while (res)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    cout << res << endl;
    cout << temp << endl;
    return res == temp;
}

int main()
{
    int x = 121;
    bool flag = isPalindrome(x);
    cout << flag;
    return 0;
}