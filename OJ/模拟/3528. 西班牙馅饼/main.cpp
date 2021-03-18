#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, M;
    while(scanf("%d%d", &N, &M) != EOF) {

        //行最大
        int most_delicious = 0;

        //两个元素最大
        int temp_delicious;

        while(N--) {

            //读入行
            for(int i = 1; i <= M; i++) {
                int num;
                scanf("%d", &num);

                //得行最大
                if(num > temp_delicious) {
                    temp_delicious = num;
                }
            }
            most_delicious += temp_delicious;

            //清零(清空上一次的值)
            temp_delicious = 0;
        }
        printf("%d\n", most_delicious);
    }
    return 0;
}
