#include <bits/stdc++.h>

using namespace std;

//����дת��ΪСд
void lowerword(string& s) {
    for (int i = 0; i < (int)s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

//�Ƚ��ַ�����С
bool cmp(string s1, string s2) {
    //������ʱ������ַ����а�����д��ĸ������Сд��ĸ����
    lowerword(s1);
    lowerword(s2);
    return s1 < s2;
}
int main() {
    //������
    int T;
    scanf("%d", &T);

    //�������׼�¼
    vector<string> vt;

    for (int i = 0; i < T; i++) {
        //���׼�¼��
        int n;
        scanf("%d", &n);

        //�� getline ǰ����� getchar() ����֮ǰ��������Ļس���
        getchar();
        //����
        while (n--) {
            string s;
            getline(cin, s);

            //�����ַ�����̬����
            vt.push_back(s);
        }

        //����
        sort(vt.begin(), vt.end(), cmp);

        cout << "case #" << i << ":" << endl;
        for (auto v : vt)
            cout << v << endl;
        vt.clear();
    }
    return 0;
}
