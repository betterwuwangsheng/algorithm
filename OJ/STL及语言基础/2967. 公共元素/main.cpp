#include <bits/stdc++.h>

using namespace std;

int main() {
    ///������
    int T;

    ///��������
    scanf("%d", &T);

    ///��������
    for (int k = 0; k < T; k++) {
        ///ÿһ�ζ����´����µļ���
        set<int> s1;
        set<int> s2;
        set<int> s3;

        set<int> temp;
        set<int> res;

        ///���鳤��
        int len1, len2, len3, num;
        scanf("%d%d%d", &len1, &len2, &len3);

        for (int i = 0; i < len1; i++) {
            scanf("%d", &num);
            s1.insert(num);
        }

        for (int i = 0; i < len2; i++) {
            scanf("%d", &num);
            s2.insert(num);
        }

        for (int i = 0; i < len3; i++) {
            scanf("%d", &num);
            s3.insert(num);
        }

        ///�󽻼���ȥ��
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                         insert_iterator<set<int> >(temp, temp.begin()));
        set_intersection(temp.begin(), temp.end(), s3.begin(), s3.end(),
                         insert_iterator<set<int> >(res, res.begin()));
        printf("case #%d:\n", k);

        ///���� res �����е�Ԫ��
        set<int>::iterator it = res.begin();

        ///�ռ��� -> -1
        if (res.empty())
            printf("-1");
        else {
            set<int>::iterator it;

            ///�������
            for (it = res.begin(); it != res.end(); it++) {
                printf("%d ", *it);
            }
        }

        ///�����
        printf("\n");
    }
    return 0;
}
