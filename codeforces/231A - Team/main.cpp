#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0, a, b, c, n;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        //������������ȷ��������� -> ���һ������
        if (a + b + c >= 2)
            ans++;  //��������
    }
    printf("%d\n", ans);
}
