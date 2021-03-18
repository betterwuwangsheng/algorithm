#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

/**
链接：https://www.nowcoder.com/questionTerminal/3f27a0a5a59643a8abf0140b9a8cf1f7
来源：牛客网

时间限制：C/C++ 1秒，其他语言2秒空间限制：C/C++ 64M，其他语言128M
算法知识视频讲解
用一维数组存储学号和成绩，然后，按成绩排序输出。

输入描述:
输入第一行包括一个整数N(1<=N<=100)，代表学生的个数。
接下来的N行每行包括两个整数p和q，分别代表每个学生的学号和成绩。


输出描述:
按照学生的成绩从小到大进行排序，并将排序后的学生信息打印出来。
如果学生的成绩相同，则按照学号的大小进行从小到大排序。
示例1
输入
3
1 90
2 87
3 92
输出
2 87
1 90
3 92
*/

//学生结构体 -> 存储学号和成绩
struct Student {
    long long num;
    int score;
};

Student stu[100]; //结构体数组

//比较函数
bool cmp(Student x, Student y){
    if(x.score == y.score)
        return x.num < y.num; //返回学号小的
    else
        return x.score < y.score; //返回成绩小的
}
int main() {
    int N;
    scanf("%d", &N);

    //循环 N 次
    for(int i = 0; i < N; i++) {
        cin >> stu[i].num;
        cin >> stu[i].score;
    }
    sort(stu, stu + N, cmp);

    for(int i = 0; i < N; i++){
        printf("%lld %d\n", stu[i].num, stu[i].score);
    }
    return 0;
}
