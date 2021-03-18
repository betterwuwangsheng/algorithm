#include <bits/stdc++.h>
#include <queue>

using namespace std;

/**
Problem Description
看病要排队这个是地球人都知道的常识。
不过经过细心的0068的观察，他发现了医院里排队还是有讲究的。0068所去的医院有三个医生（汗，这么少）同时看病。而看病的人病情有轻重，所以不能根据简单的先来先服务的原则。所以医院对每种病情规定了10种不同的优先级。级别为10的优先权最高，级别为1的优先权最低。医生在看病时，则会在他的队伍里面选择一个优先权最高的人进行诊治。如果遇到两个优先权一样的病人的话，则选择最早来排队的病人。

现在就请你帮助医院模拟这个看病过程。


Input
输入数据包含多组测试，请处理到文件结束。
每组数据第一行有一个正整数N(0<N<2000)表示发生事件的数目。
接下来有N行分别表示发生的事件。
一共有两种事件：
1:"IN A B",表示有一个拥有优先级B的病人要求医生A诊治。(0<A<=3,0<B<=10)
2:"OUT A",表示医生A进行了一次诊治，诊治完毕后，病人出院。(0<A<=3)


Output
对于每个"OUT A"事件，请在一行里面输出被诊治人的编号ID。如果该事件时无病人需要诊治，则输出"EMPTY"。
诊治人的编号ID的定义为：在一组测试中，"IN A B"事件发生第K次时，进来的病人ID即为K。从1开始编号。


Sample Input
7
IN 1 1
IN 1 2
OUT 1
OUT 2
IN 2 1
OUT 2
OUT 1
2
IN 1 1
OUT 1


Sample Output
2
EMPTY
3
1
1


*/
struct Person {

    ///编号
    int id;

    ///优先级
    int pripority;

    ///构造函数 -> 初始化数据(简洁)
    Person(int _id, int _pripority) : id(_id), pripority(_pripority) {}

    ///重载小于符号
    bool operator < (const Person &p) const {
        if(p.pripority == pripority) {
            return p.id < id;
        }
        return p.pripority > pripority;
    }
};

///优先队列
int main() {

    ///数组行数
    int N;
    while(scanf("%d", &N) != EOF) {

        ///id 从 1 开始编号
        int id = 1;

        ///优先级队列
        ///医生队列 A B C
        priority_queue<Person> pq[4];

        while(N--) {
            /// IN? OUT?
            string s;

            ///cin 遇空格停止识别
            cin >> s;

            ///医生编号
            int doctor;

            ///读入 IN
            if(s == "IN") {

                ///患者优先级
                int priority;

                ///cin >> doctor >> priority;
                scanf("%d%d", &doctor, &priority);

                ///向该医生队列中加入患者
                pq[doctor].push(Person(id++, priority));
            } else {

                ///OUT?
                scanf("%d", &doctor);

                ///该医生队列不为空
                if(!pq[doctor].empty()) {

                    ///输出队列中第一个患者的 id
                    printf("%d\n", pq[doctor].top().id);

                    ///看完病 -> 离开
                    pq[doctor].pop();
                } else {

                    ///队列为空 -> 没有患者
                    printf("EMPTY\n");
                }
            }
        }
    }
    return 0;
}
