#include <bits/stdc++.h>

using namespace std;

int main() {
    long long num, temp;
    while(scanf("%lld", &num) != EOF) {
        temp = (long long)sqrt(num);

        //���� ƽ�� < ����
        if(temp * temp < num) {
            temp++;
        }
        cout << temp << endl;
    }
    return 0;
}
