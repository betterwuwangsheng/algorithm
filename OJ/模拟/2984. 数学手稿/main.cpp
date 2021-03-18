#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    int k = 0;
    while(T--) {

        int N, K, man, woman;
        cin >> N >> K;
        printf("case #%d:\n", k++);

        //标记是否有解
        int flag = 0;
        for(man = 0; man <= K / 3 && man <= N; man++) {
            for(woman = 0; woman <= K / 2 && woman <= N; woman++) {
                if(2 * man + woman == abs(K - N)) {
                    flag = 1;
                    int child = N - man - woman;
                    if(man < 0 || woman < 0 || child < 0 && child > N) {
                        flag = 0;
                    } else printf("%d %d %d\n", man, woman, child);
                }
            }
        }
        if(!flag)
            cout << "-1" << endl;
    }
    return 0;
}
