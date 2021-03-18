#include <bits/stdc++.h>

using namespace std;

int vis[3];
int res[3];
int main() {

    //1 2 3 的全排列
    for(int i = 1; i <= 3; ++i) {

        //填入第一个数字并且标记该数字被使用
        vis[i] = 1;

        //使用第一个数字
        res[1] = i;

        for(int j = 1; j <= 3; ++j) {

            //若该数字被使用过
            if(vis[j])

                //跳出本层循环
                continue;

            //标记
            vis[j] = 1;

            //填入第二个数字并且标记
            res[2] = j;

            for(int k = 1; k <= 3; ++k) {

                if(vis[k])
                    continue;

                //填入第三个数字
                res[3] = k;

                for(int index = 1; index <= 3; ++index) {
                    cout << res[index] << " ";
                }
                cout << endl;
            }
            //回溯(去除标记)
            vis[j] = 0;

        }
        //回溯
        vis[i] = 0;
    }
    return 0;
}
