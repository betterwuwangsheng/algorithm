#include <bits/stdc++.h>

using namespace std;

/**
     map<key, val>
     �� -> ����
     ֵ -> ���ִ���
*/
int main() {
    int T, n;
    scanf("%d", &T);

    for(int cnt = 0; cnt < T; cnt++) {

        //���� map ���� ->
        map<int, int> m;
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {

            //��ȡ����
            int num;
            scanf("%d", &num);

            //����Ԫ�� (��ʱ val Ĭ�� 0)
            //���Ǽ��������һ��Ԫ��
            if(m.find(num) != m.end())

                //��Ӧ����ֵ + 1
                m[num]++;
            else

                //�Ǽ��������һ��Ԫ��(����Ԫ��ֻ���ֹ�һ��)
                m[num] = 1;
        }

        int max_ = 0;
        map<int, int>::iterator m_it;

        //���� -> �������ִ���
        for(m_it = m.begin(); m_it != m.end(); m_it++) {
            max_ = max(max_, m_it -> second);
        }
        cout << "case #" << cnt << ":\n";
        cout << max_ << endl;
    }
    return 0;
}
