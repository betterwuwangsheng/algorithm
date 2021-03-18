#include <bits/stdc++.h>

using namespace std;

int main() {

    //减少枚举范围
    //公鸡不会超过 100 / 5 = 20
    //同理 -> 母鸡 <= 33
    //小计 <= 100
    for(int i = 0; i <= 20; i++) { //公鸡数量
        for(int j = 0; j <= 33; j++) { //母鸡数量
            for(int k = 0; k <= 100; k++) {
                if(k % 3 == 0 && 5 * i + 3 * j + k / 3 == 100 && i + j + k == 100)
                    cout << i << " " << j << " " << k << "" << endl;
            }
        }
    }
    return 0;
}

