#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    if (n % 2 == 0 && (n > 4 && n <= 12))
        a = 1;  //����Ҫ������������
    if (n % 2 == 0 || (n > 4 && n <= 12))
        b = 1;  //����Ҫ����һ������
    if (n % 2 == 0 ^ (n > 4 && n <= 12))
        c = 1;  //����Ҫֻ����һ������
    if (n % 2 != 0 && (n <= 4 || n > 12))
        d = 1;  //����Ҫ��������ȫ��������
    cout << a << " " << b << " " << c << " " << d << endl;  //���
    return 0;
}