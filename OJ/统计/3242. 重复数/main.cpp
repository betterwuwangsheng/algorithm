#include <bits/stdc++.h>

using namespace std;

int a[1010];

int main() {

    //数组组数
    int T;
    scanf("%d", &T);

    //读入每一组数据
    for(int cnt = 0; cnt < T; cnt++) {

        //读入每一组数据数量
        int n;
        scanf("%d", &n);

        vector<int> vt;
        vector<int> res;

        int ans = 0;
        int num;
        for(int i = 0; i < n; i++) {
            scanf("%d", &num);
            vt.push_back(num);
        }

        vector<int>::iterator it;
        for(it = vt.begin(); it != vt.end(); it++) {

            //count(ivec.begin() , ivec.end() , searchValue)
            //读取一系列int型数据，并将它们存储到vector对象中，然后统计某个指定的值出现了多少次。
            int temp = (int)count(vt.begin(), vt.end(), *it);

            //找最大
            ans = max(ans, temp);
        }
        printf("case #%d:\n%d\n", cnt, ans);
    }
    return 0;
}
