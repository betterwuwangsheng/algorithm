#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    scanf("%d%d", &n, &x);

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        int num = i;  //��ֵ�� num����Ȼ�ᵼ����ѭ��
        while (num) {
            int t = num % 10;
            if (t == x)
                cnt++;
            num /= 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
