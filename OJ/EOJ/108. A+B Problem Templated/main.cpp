#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution() {}
    ~Solution() {}
    /**
     * [���A+B�ļ���]
     * @param  a [����A]
     * @param  b [����B]
     * @return   [A+B��ֵ]
     */
    int solve(int a, int b) {
        // TODO
        return a + b;
    }
};
//�������Ϊ��

/* ��Ĵ��뽫��Ƕ����������� */


int main() {
    Solution* s = new Solution();
    int a, b;
    cin >> a >> b;
    /* ���뼰�����֣�ϸ�����ز��� */
    cout << s -> solve(a, b) << endl;
    /* ���������֣�ϸ�����ز��� */
    return 0;
}
