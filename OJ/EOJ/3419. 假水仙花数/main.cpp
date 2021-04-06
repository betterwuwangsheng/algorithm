#include <bits/stdc++.h>

using namespace std;

//������
int quick_pow(int a, int b) {
    if (b == 0)
        return 1;
    else if (b == 1)
        return a;
    else if (b & 1)
        return a * quick_pow(a, b - 1);
    else {
        int ans = quick_pow(a, b >> 1);
        return ans * ans;
    }
}
//�ж��Ƿ�Ϊˮ�ɻ���
bool yesOrNot(int i) {
    int sum = 0;
    int x = i;
    while (i > 0) {
        int temp = i % 10;

        //���
        sum += quick_pow(temp, 4);
        i = i / 10;
    }
    if (sum == x)
        return true;
    return false;
}
int main() {
    for (int i = 0; i < 10000; i++) {
        if (yesOrNot(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
