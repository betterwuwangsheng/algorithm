#include <bits/stdc++.h>

using namespace std;

int a[1010];

int main() {

    //��������
    int T;
    scanf("%d", &T);

    //����ÿһ������
    for(int cnt = 0; cnt < T; cnt++) {

        //����ÿһ����������
        int n;
        scanf("%d", &n);

        vector<int> vt;
        vector<int> res;

        int ans = 0;
        int num;
        for(int i = 0; i < n; i++) {
            scanf("%d", &num);
            vt.push_back(num);
        }

        vector<int>::iterator it;
        for(it = vt.begin(); it != vt.end(); it++) {

            //count(ivec.begin() , ivec.end() , searchValue)
            //��ȡһϵ��int�����ݣ��������Ǵ洢��vector�����У�Ȼ��ͳ��ĳ��ָ����ֵ�����˶��ٴΡ�
            int temp = (int)count(vt.begin(), vt.end(), *it);

            //�����
            ans = max(ans, temp);
        }
        printf("case #%d:\n%d\n", cnt, ans);
    }
    return 0;
}
