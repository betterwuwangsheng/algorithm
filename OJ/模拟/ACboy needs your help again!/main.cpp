#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;

/**
问题描述
ACboy被绑架了！！
他非常想念他的母亲，现在非常害怕。你无法想象他被放进的房间有多暗，那么可怜:(。
作为一个聪明的ACMer，你想让ACboy摆脱怪物的迷宫。当您到达迷宫的大门时，蒙斯特说：“我听说您很聪明，但是如果不能解决我的问题，您将会死于ACboy。”
墙上的怪物显示了怪物的问题：
每个问题的第一行是整数N（命令数），以及单词“ FIFO”或“ FILO”。（您非常高兴，因为您知道“ FIFO”代表“先进先出”和“ FILO”表示“先进先出”）
，随后的N行，每行是“ IN M”或“ OUT”，
问题的答案是一扇门，所以如果您想营救ACboy，请仔细回答问题！


输入值
输入包含多个测试用例。
第一行有一个整数，代表测试用例的数量。
并且上面描述了每个子问题的输入。


输出量
对于每个命令“ OUT”，您应该输出一个整数，具体取决于单词“ FIFO”或“ FILO”，或者如果没有任何整数，则单词“ None”。
Sample Input
4
4 FIFO
IN 1
IN 2
OUT
OUT
4 FILO
IN 1
IN 2
OUT
OUT
5 FIFO
IN 1
IN 2
OUT
OUT
OUT
5 FILO
IN 1
IN 2
OUT
IN 3
OUT


Sample Output
1
2
2
1
1
2
None
2
3
*/


int main() {

    int T, n;

    string way;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        cin >> n >> way;

        ///FIFO -> 先进先出 -> 队列
        if(way == "FIFO") {

            queue<int> q;
            for(int i = 0; i < n; i++) {
                string s;
                cin >> s;


                ///IN
                if(s == "IN") {

                    int num;
                    cin >> num;
                    q.push(num);
                } else {

                    ///非空队列
                    if(!q.empty()) {
                        cout << q.front() << endl;
                        q.pop();
                    } else {
                        ///空队列
                        cout << "None" << endl;
                    }
                }
            }
        } else {

            stack<int> stk;

            ///FILO -> 先进后出 -> 栈
            for(int i = 0; i < n; i++) {
                string s;
                cin >> s;

                ///IN
                if(s == "IN") {
                    int num;
                    cin >> num;

                    stk.push(num);
                } else { ///OUT

                    ///非空队列
                    if(!stk.empty()) {
                        cout << stk.top() << endl;
                        stk.pop();
                    } else {
                        ///空队列
                        cout << "None" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
