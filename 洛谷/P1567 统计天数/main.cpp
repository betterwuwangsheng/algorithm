#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int a[MAXN];
int main() {
    int n;
    cin >> n;
    int cnt = 1, maxx = 0;  //���������ֵ
   
    //��������
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (a[i] < a[i + 1])  //����
            cnt++;            //��������
        else
            cnt = 1;            //����
        maxx = max(maxx, cnt);  //��ȡ���
    }
    cout << maxx;
    return 0;
}
