#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    //���������
    int num = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            num++;

            //С�� 10 ��� 0X
            if (num < 10)
                cout << "0" + to_string(num);
            else
                //����ֱ���������
                cout << num;
        }
        cout << endl;
    }
    return 0;
}