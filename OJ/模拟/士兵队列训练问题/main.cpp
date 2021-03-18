#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

/**
Problem Description
某部队进行新兵队列训练，将新兵从一开始按顺序依次编号，并排成一行横队，训练的规则如下：从头开始一至二报数，凡报到二的出列，剩下的向小序号方向靠拢，再从头开始进行一至三报数，凡报到三的出列，剩下的向小序号方向靠拢，继续从头开始进行一至二报数。。。，以后从头开始轮流进行一至二报数、一至三报数直到剩下的人数不超过三人为止。


Input
本题有多个测试数据组，第一行为组数N，接着为N行新兵人数，新兵人数不超过5000。


Output
共有N行，分别对应输入的新兵人数，每行输出剩下的新兵最初的编号，编号之间有一个空格。


Sample Input
2
20
40


Sample Output
1 7 19
1 19 37

*/
int main()
{
    vector<int> vt;
    int N, num;
    scanf("%d", &N);

    while(N--){
        scanf("%d", &num);

        for(int i = 0; i < num; i++){

            ///士兵编号
            vt.insert(0);
        }

        int cnt = n;
        int flag = 0;
        while(cnt > 3){
            num = flag;
        }

    }
    return 0;
}
