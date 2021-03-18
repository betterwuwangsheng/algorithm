#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
圆桌上围坐着2n个人。其中n个人是好人，另外n个人是坏人。如果从第一个人开始数数，数到第m个人，则立即处死该人；然后从被处死的人之后开始数数，再将数到的第m个人处死……依此方法不断处死围坐在圆桌上的人。试问预先应如何安排这些好人与坏人的座位，能使得在处死n个人之后，圆桌上围坐的剩余的n个人全是好人。


Input
多组数据，每组数据输入：好人和坏人的人数n（<=32767）、步长m（<=32767）；


Output
对于每一组数据，输出2n个大写字母，‘G’表示好人，‘B’表示坏人，50个字母为一行，不允许出现空白字符。相邻数据间留有一空行。


Sample Input
2 3
2 4


Sample Output
GBBG

BGGB

*/

///模拟圆桌
vector<int> person;

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {

        person.clear();
        for(int i = 0; i < 2 * n; i++) {

            ///向 person 的尾端添加一个值为 i 的元素
            person.push_back(i);
        }

        ///杀死 n 个坏人
        int pos = 0;

        for(int i = 0; i < n; i++) {

            ///循环
            pos = (pos + m - 1) % person.size();

            ///杀掉 n 个坏人
            ///erase(int n); 删除某个元素
            person.erase(person.begin() + pos);
        }

        int cnt = 0;
        for(int i = 0; i < 2 * n; i++) {

            //每 50 个字母输出一个换行
            if(i % 50 == 0 && i)

                ///空行 != 回车
                cout << endl;

            //留下的人都是好人，只有好人才会 i == person[cnt]
            if(cnt < (int)person.size() && person[cnt] == i) {

                ///好人 -> person[cnt] = i(数值与下标相同)
                printf("G");
                cnt++;
            } else

                ///坏人
                printf("B");
        }
        cout << endl  << endl;
    }
    return 0;
}
