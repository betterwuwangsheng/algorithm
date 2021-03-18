#include <bits/stdc++.h>

using namespace std;

int main() {

    for(int i = 0; i <= 100; i++){ //公鸡数量
        for(int j = 0; j <= 100; j++){ //母鸡数量
            for(int k = 0; k <= 100; k++){
                    if(k % 3 == 0 && 5 * i + 3 * j + k / 3 == 100 && i + j + k == 100)
                    cout << i << " " << j << " " << k << "" << endl;
            }
        }
    }
    return 0;
}

