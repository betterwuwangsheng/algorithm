#include <bits/stdc++.h>
#include <set>
using namespace std;

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
/**
    set����ֻ�ǵ����ļ��ļ��ϣ�������Ϊһ��
    set������֧���±����������û�ж���maped_type���͡�
    ��set�����У�value_type����pair���ͣ�������key_type������ͬ�����͡�
*/
int main() {
    ///��ʼ�� set
    set<int> st;

    ///����Ԫ��
    for(int i = 0; i < 5; i++) {
        st.insert(i);
    }
    st.insert(5);

    ///set ���ϵļ�����Ψһ
    st.insert(5);

    set<int>::iterator it;
    for( it : st) {
        cout << it <<' ';
    }

    cout << endl;

    set<node> stk_node;
    stk_node.insert(node(1, 2));
    stk_node.insert(node(0, 3));

    set<node>::iterator it2;
    for( it2 : stk_node) {
        cout << it2.x << it2.y <<' ';
    }

//    cout << stk_node << "��С��" << stk_node.size();
    return 0;
}
