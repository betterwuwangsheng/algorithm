#include <bits/stdc++.h>

using namespace std;

//小正方形所在列，一定不能被 gcd 整除
//小正方形所不在列，一定能被 gcd 整除
//所以一定不能拼成大正方形

//如果能被gcd整除，则由扩展欧几里得一定存在，因此可以构成在中间，四个在周围的正方形
int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);


    int z = __gcd(x,y);
    if(n % z == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
