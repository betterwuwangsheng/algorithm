#include <bits/stdc++.h>

using namespace std;

int main() {

    //x + y + z = 100
    //5x + 3y + z/3 = 300

    //解方程
    //y = (100 - 7x) / 4
    //y = 25 - 7x / 4
    for(int i = 0; i <= 20; i += 4) { //公鸡数量
        int j = (100 - 7 * i) / 4;
        int k = 100 - i - j;
        if((100 - 7 * i) % 4 == 0 && j >=0 && k % 3 == 0 && 5 * i + 3 * j + k / 3 == 100 && i + j + k == 100)
            cout << i << " " << j << " " << k << "" << endl;

    }
    return 0;
}

