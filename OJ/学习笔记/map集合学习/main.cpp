#include <bits/stdc++.h>

using namespace std;

int main()
{
    /**
     map��ʼ�� -> �� map
        map<k, v> m;
        map<k, v> m(m2);
        map<k, v> m(b, e);
     map��Ԫ�صĲ���
        ʹ���±�
        m.insert(e)

        ʹ��insert����
        m.insert(beg, end)
        m.insert(iter, e)
     ��map��ʹ���±���ʲ����ڵ�Ԫ�ؽ�������map���������һ���µ�Ԫ�ء�

     map��Ԫ�صĲ��ҺͶ�ȡ
        ���Ҹ�Ԫ���Ƿ���ڣ�����ʹ�ú���count(k) > 0 -> ����
        �ú������ص���k���ֵĴ�����

        ������ȡ��key��Ӧ��ֵ������ʹ�ú��� find(k)
        �ú������ص���ָ���Ԫ�صĵ�������(ָ��)(ͨ�� *����ȡֵ)

        (*it).first��õ� key��
        (*it).second��õ� value��
        ��map��ɾ��Ԫ��

    ��map��ɾ��Ԫ�صĺ�����erase()���ú��������µ�������ʽ��
        m.erase(k)
        m.erase(p)
        m.erase(b, e)

    */
    return 0;
}
