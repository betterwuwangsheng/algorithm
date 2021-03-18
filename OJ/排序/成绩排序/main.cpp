#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

/**
���ӣ�https://www.nowcoder.com/questionTerminal/3f27a0a5a59643a8abf0140b9a8cf1f7
��Դ��ţ����

ʱ�����ƣ�C/C++ 1�룬��������2��ռ����ƣ�C/C++ 64M����������128M
�㷨֪ʶ��Ƶ����
��һά����洢ѧ�źͳɼ���Ȼ�󣬰��ɼ����������

��������:
�����һ�а���һ������N(1<=N<=100)������ѧ���ĸ�����
��������N��ÿ�а�����������p��q���ֱ����ÿ��ѧ����ѧ�źͳɼ���


�������:
����ѧ���ĳɼ���С����������򣬲���������ѧ����Ϣ��ӡ������
���ѧ���ĳɼ���ͬ������ѧ�ŵĴ�С���д�С��������
ʾ��1
����
3
1 90
2 87
3 92
���
2 87
1 90
3 92
*/

//ѧ���ṹ�� -> �洢ѧ�źͳɼ�
struct Student {
    long long num;
    int score;
};

Student stu[100]; //�ṹ������

//�ȽϺ���
bool cmp(Student x, Student y){
    if(x.score == y.score)
        return x.num < y.num; //����ѧ��С��
    else
        return x.score < y.score; //���سɼ�С��
}
int main() {
    int N;
    scanf("%d", &N);

    //ѭ�� N ��
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
