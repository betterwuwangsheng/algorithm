#include <bits/stdc++.h>

using namespace std;

stack<int> st;
int main() {
    //��������
    int N;
    cin >> N;
    int res = N;
    while (N--) {
        int s, dir;
        cin >> s >> dir;

        //���� -> ��ջ
        if (dir == 1)
            st.push(s);

        //����
        else if (dir == 0) {
            //ջ��Ϊ��
            while (!st.empty()) {
                //�������
                if (s > st.top()) {
                    res--;
                    st.pop();
                } else {
                    res--;
                    break;
                }
            }
        }
    }
    cout << res;
    return 0;
}
