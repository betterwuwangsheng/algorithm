#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    //scanf 和 getline 之间使用 getchar 吸收回车符号
    getchar();

    for(int cnt = 0; cnt < T; cnt++) {
        string str;
        getline(cin, str);

        int len = str.size();

        for(int i = 0; i < len - 1; i++) {
            for(int j = i + 1; j < len; j++) {

                //满足要求才进行交换
                if(str[i] > str[j] && str[i] >= 'A' && str[i] <= 'Z'
                        && str[j] >= 'A' && str[j] <= 'Z') {
                    swap(str[i], str[j]);
                }
            }
        }

        printf("case #%d:\n", cnt);
        for(int i = 0; i < len; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
