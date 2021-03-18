#include <bits/stdc++.h>

using namespace std;

int main() {
    ///问题数
    int T;

    ///问题组数
    scanf("%d", &T);

    ///读入问题
    for (int k = 0; k < T; k++) {
        ///每一次都重新创建新的集合
        set<int> s1;
        set<int> s2;
        set<int> s3;

        set<int> temp;
        set<int> res;

        ///数组长度
        int len1, len2, len3, num;
        scanf("%d%d%d", &len1, &len2, &len3);

        for (int i = 0; i < len1; i++) {
            scanf("%d", &num);
            s1.insert(num);
        }

        for (int i = 0; i < len2; i++) {
            scanf("%d", &num);
            s2.insert(num);
        }

        for (int i = 0; i < len3; i++) {
            scanf("%d", &num);
            s3.insert(num);
        }

        ///求交集并去重
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                         insert_iterator<set<int> >(temp, temp.begin()));
        set_intersection(temp.begin(), temp.end(), s3.begin(), s3.end(),
                         insert_iterator<set<int> >(res, res.begin()));
        printf("case #%d:\n", k);

        ///遍历 res 集合中的元素
        set<int>::iterator it = res.begin();

        ///空集合 -> -1
        if (res.empty())
            printf("-1");
        else {
            set<int>::iterator it;

            ///遍历输出
            for (it = res.begin(); it != res.end(); it++) {
                printf("%d ", *it);
            }
        }

        ///最后换行
        printf("\n");
    }
    return 0;
}
