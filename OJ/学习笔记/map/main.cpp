#include <iostream>
#include <map>

using namespace std;

/**
�Զ�����Key �� value�Ķ�Ӧ��key �� value��������������Ҫ�����͡�

����keyֵ���ٲ��Ҽ�¼�����ҵĸ��ӶȻ�����Log(N)�������1000����¼��������10�Σ�1,000,000����¼��������20�Ρ�

���ٲ���Key -Value ��¼��

����ɾ����¼

����Key �޸�value��¼��

�������м�¼��
*/
struct node {
    int x;
    int y;

    ///���캯��
    node(int a, int b) {
        x = a;
        y = b;
    }

    ///��������� <
    bool operator < (node a) const {

        ///�ṹ���С�Ƚ�
        return x < a.x;
    }
};
int main() {
    ///��ʼ�� double -> string ��ӳ��
    map<double, string> map1;
    map<node,long long> map2;

    ///��ʼ�� map
    map<char, int> mp;

    ///����ӳ��
    mp['a'] = 1;
    mp['c'] = 3;
    mp['b'] = 5;



    map<int, int> m;
    int n;
    cin >> n;
    while(n--) {
        int num;
        cin >> num;

        ///ѧ��û���ظ�
        ///map ����ͨ���±����
        if(m[num]) { /// Ĭ�Ͻ��� null ӳ��

        } else {
            m[num] = 1;
        }
    }
    return 0;
}
