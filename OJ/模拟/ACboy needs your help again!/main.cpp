#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;

/**
��������
ACboy������ˣ���
���ǳ���������ĸ�ף����ڷǳ����¡����޷����������Ž��ķ����жవ����ô����:(��
��Ϊһ��������ACMer��������ACboy���ѹ�����Թ������������Թ��Ĵ���ʱ����˹��˵��������˵���ܴ���������������ܽ���ҵ����⣬����������ACboy����
ǽ�ϵĹ�����ʾ�˹�������⣺
ÿ������ĵ�һ��������N�������������Լ����ʡ� FIFO���� FILO���������ǳ����ˣ���Ϊ��֪���� FIFO�������Ƚ��ȳ����͡� FILO����ʾ���Ƚ��ȳ�����
������N�У�ÿ���ǡ� IN M���� OUT����
����Ĵ���һ���ţ������������Ӫ��ACboy������ϸ�ش����⣡


����ֵ
��������������������
��һ����һ���������������������������
��������������ÿ������������롣


�����
����ÿ����� OUT������Ӧ�����һ������������ȡ���ڵ��ʡ� FIFO���� FILO�����������û���κ��������򵥴ʡ� None����
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

        ///FIFO -> �Ƚ��ȳ� -> ����
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

                    ///�ǿն���
                    if(!q.empty()) {
                        cout << q.front() << endl;
                        q.pop();
                    } else {
                        ///�ն���
                        cout << "None" << endl;
                    }
                }
            }
        } else {

            stack<int> stk;

            ///FILO -> �Ƚ���� -> ջ
            for(int i = 0; i < n; i++) {
                string s;
                cin >> s;

                ///IN
                if(s == "IN") {
                    int num;
                    cin >> num;

                    stk.push(num);
                } else { ///OUT

                    ///�ǿն���
                    if(!stk.empty()) {
                        cout << stk.top() << endl;
                        stk.pop();
                    } else {
                        ///�ն���
                        cout << "None" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
