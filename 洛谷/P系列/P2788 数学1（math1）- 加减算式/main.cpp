#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    int num;
    ll ans = 0;
    while (cin >> num)
        ans += num; //读入并计算
    cout << ans;  //输出
    return 0;
}