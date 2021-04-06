#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF) {

        //n = 0并且m=0表示输入的结束，不做处理。
        if(a == 0 && b == 0)
            break;

        //set 集合不重复 -> 默认升序
        vector<int> vta, vtb, res;

        while(a--) {
            int num;
            scanf("%d", &num);

            //插入 vector
            vta.push_back(num);
        }

        //排序
        sort(vta.begin(), vta.end());

        while(b--) {
            int num;
            scanf("%d", &num);
            vtb.push_back(num);
        }
        sort(vtb.begin(), vtb.end());

        //求差集
        set_difference(vta.begin(), vta.end(),
                       vtb.begin(), vtb.end(),
                       inserter(res, res.begin()));

        if(res.size() == 0) {
            printf("NULL");
        } else {
            for (auto &it : res)
                printf("%d ", it);
        }
        printf("\n");
    }
    return 0;
}
