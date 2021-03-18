#include <bits/stdc++.h>
using namespace std;

int res[100][100];
int main() {
    int num;
    while(cin >> num) {

        //构造图形
        //将 1 放在最后一行中间一列
        res[num - 1][num / 2] = 1;


        //输出图形
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }


    }
    return 0;
}
