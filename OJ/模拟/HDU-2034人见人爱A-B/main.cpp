#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {

        //n = 0并且m=0表示输入的结束，不做处理。
        if(a == 0 && b == 0)
            break;

        //set 集合不重复 -> 默认升序
        set<int> sta, stb, res;

        while(a--) {
            int num;
            scanf("%d", &num);

            //插入 vector
            sta.insert(num);
        }
        while(b--) {
            int num;
            scanf("%d", &num);
            stb.insert(num);
        }

        //求差集
        set_difference(sta.begin(), sta.end(),
                       stb.begin(), stb.end(),
                       inserter(res, res.begin()));

        if(res.size() == 0) {
            printf("NULL\n");
        } else {

            for(auto it = res.begin(); it != res.end(); it++) {
                printf("%d ", *it);
            }
            printf("\n");
            sta.clear();
            stb.clear();
            res.clear();
        }
    }
    return 0;
}
