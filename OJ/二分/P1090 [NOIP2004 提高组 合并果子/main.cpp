#include <bits/stdc++.h>

using namespace std;


/**
题目描述
在一个果园里，多多已经将所有的果子打了下来，而且按果子的不同种类分成了不同的堆。多多决定把所有的果子合成一堆。

每一次合并，多多可以把两堆果子合并到一起，消耗的体力等于两堆果子的重量之和。可以看出，所有的果子经过 n-1n−1 次合并之后， 就只剩下一堆了。多多在合并果子时总共消耗的体力等于每次合并所耗体力之和。

因为还要花大力气把这些果子搬回家，所以多多在合并果子时要尽可能地节省体力。假定每个果子重量都为 11 ，并且已知果子的种类 数和每种果子的数目，你的任务是设计出合并的次序方案，使多多耗费的体力最少，并输出这个最小的体力耗费值。

例如有 33 种果子，数目依次为 11 ， 22 ， 99 。可以先将 11 、 22 堆合并，新堆数目为 33 ，耗费体力为 33 。接着，将新堆与原先的第三堆合并，又得到新的堆，数目为 1212 ，耗费体力为 1212 。所以多多总共耗费体力 =3+12=15=3+12=15 。可以证明 1515 为最小的体力耗费值。

输入格式
共两行。
第一行是一个整数 n(1\leq n\leq 10000)n(1≤n≤10000) ，表示果子的种类数。

第二行包含 nn 个整数，用空格分隔，第 ii 个整数 a_i(1\leq a_i\leq 20000)a
i
​
 (1≤a
i
​
 ≤20000) 是第 ii 种果子的数目。

输出格式
一个整数，也就是最小的体力耗费值。输入数据保证这个值小于 2^{31}2
31
  。

输入输出样例
输入 #1复制
3
1 2 9
输出 #1复制
15
说明/提示
对于30％的数据，保证有n \le 1000n≤1000：

对于50％的数据，保证有n \le 5000n≤5000；

对于全部的数据，保证有n \le 10000n≤10000。
*/

int n;
int sum = 0;
int num;
int main() {

    cin >> n;

    //升序优先队列
    /**
        插入元素的时候就进行排序(边插入边排序)
        priority_queue <int, vector <int>, less <int> > max_q;//大根堆
        priority_queue <int, vector <int>, greater <int> > min_q;//小根堆 -> 升序队列

        vector < long long >;
        queue <double >;
    */
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i = 1; i <= n; i++) {
        cin >> num;

        //加入小根堆
        pq.push(num);
    }

    //合并 n - 1 次
    for(int i = 1; i < n; i++) {

        //计算优先队列的前两个元素之和
        //暂存堆顶元素
        int temp = pq.top();

        //删去堆顶元素
        pq.pop();
        temp += pq.top();
        pq.pop();

        //求和
        sum += temp;

        //将上一次计算的两对之和存入优先队列
        pq.push(temp);
    }
    cout << sum << endl;
    return 0;
}
