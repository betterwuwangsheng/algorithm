#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) {

        //a < b ����
        if(a < b) {
            swap(a, b);
        }

        //������ > 0 ʱ
        while(b > 0) {

            //ȡ��
            int temp = a % b;

            //����
            a = b;
            b = temp;
        }
        cout << a << endl;
    }
    return 0;
}
