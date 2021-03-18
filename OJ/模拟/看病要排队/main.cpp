#include <bits/stdc++.h>
#include <queue>

using namespace std;

/**
Problem Description
����Ҫ�Ŷ�����ǵ����˶�֪���ĳ�ʶ��
��������ϸ�ĵ�0068�Ĺ۲죬��������ҽԺ���Ŷӻ����н����ġ�0068��ȥ��ҽԺ������ҽ����������ô�٣�ͬʱ���������������˲��������أ����Բ��ܸ��ݼ򵥵������ȷ����ԭ������ҽԺ��ÿ�ֲ���涨��10�ֲ�ͬ�����ȼ�������Ϊ10������Ȩ��ߣ�����Ϊ1������Ȩ��͡�ҽ���ڿ���ʱ����������Ķ�������ѡ��һ������Ȩ��ߵ��˽������Ρ����������������Ȩһ���Ĳ��˵Ļ�����ѡ���������ŶӵĲ��ˡ�

���ھ��������ҽԺģ������������̡�


Input
�������ݰ���������ԣ��봦���ļ�������
ÿ�����ݵ�һ����һ��������N(0<N<2000)��ʾ�����¼�����Ŀ��
��������N�зֱ��ʾ�������¼���
һ���������¼���
1:"IN A B",��ʾ��һ��ӵ�����ȼ�B�Ĳ���Ҫ��ҽ��A���Ρ�(0<A<=3,0<B<=10)
2:"OUT A",��ʾҽ��A������һ�����Σ�������Ϻ󣬲��˳�Ժ��(0<A<=3)


Output
����ÿ��"OUT A"�¼�������һ����������������˵ı��ID��������¼�ʱ�޲�����Ҫ���Σ������"EMPTY"��
�����˵ı��ID�Ķ���Ϊ����һ������У�"IN A B"�¼�������K��ʱ�������Ĳ���ID��ΪK����1��ʼ��š�


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

    ///���
    int id;

    ///���ȼ�
    int pripority;

    ///���캯�� -> ��ʼ������(���)
    Person(int _id, int _pripority) : id(_id), pripority(_pripority) {}

    ///����С�ڷ���
    bool operator < (const Person &p) const {
        if(p.pripority == pripority) {
            return p.id < id;
        }
        return p.pripority > pripority;
    }
};

///���ȶ���
int main() {

    ///��������
    int N;
    while(scanf("%d", &N) != EOF) {

        ///id �� 1 ��ʼ���
        int id = 1;

        ///���ȼ�����
        ///ҽ������ A B C
        priority_queue<Person> pq[4];

        while(N--) {
            /// IN? OUT?
            string s;

            ///cin ���ո�ֹͣʶ��
            cin >> s;

            ///ҽ�����
            int doctor;

            ///���� IN
            if(s == "IN") {

                ///�������ȼ�
                int priority;

                ///cin >> doctor >> priority;
                scanf("%d%d", &doctor, &priority);

                ///���ҽ�������м��뻼��
                pq[doctor].push(Person(id++, priority));
            } else {

                ///OUT?
                scanf("%d", &doctor);

                ///��ҽ�����в�Ϊ��
                if(!pq[doctor].empty()) {

                    ///��������е�һ�����ߵ� id
                    printf("%d\n", pq[doctor].top().id);

                    ///���겡 -> �뿪
                    pq[doctor].pop();
                } else {

                    ///����Ϊ�� -> û�л���
                    printf("EMPTY\n");
                }
            }
        }
    }
    return 0;
}
