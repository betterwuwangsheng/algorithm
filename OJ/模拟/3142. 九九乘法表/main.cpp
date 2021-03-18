#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        for(int i = 1; i <= a; ++i) {
            for(int j = 1; j <= 9; ++j) {

                if(i > j)
                    continue;
                else if(j < 9)
                    printf("%d*%d=%d ", i, j, i * j);
                else if(j == 9)
                    //每一行后面没有空格
                    printf("%d*%d=%d\n", i, j, i * j);

            }
        }

        //每个样例之后跟一个空白行 。。。
        printf("\n");
    }
    return 0;
}
