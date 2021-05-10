#include <bits/stdc++.h>
/*
思路：转化求2n的公倍数中满足(a+b)*(b-a+1)=2n
*/
using namespace std;//(a+b)*(b-a+1)/2=n

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {

        int num;
        cin >> num;

        //计数
        int cnt = 0;
        for(int j = 1; j <= num; j++) { // 2 4 8 16
            //i=a+b;
            //a+len-1=b
            //2a+len-1=i;
            //len=b-a+1
            if((2 * num) % j == 0) {
                int len = (2 * num) / j;
                if((j + 1 - len ) % 2 == 0 && j + 1 - len > 0)
                    cnt++;
            }
        }
        printf("case #%d:\n%d\n", i, cnt);
    }
    return 0;
}
