#include <bits/stdc++.h>

using namespace std;

//�ж��Ƿ�Ϊ���� -> Сѧ������
bool IsPrime(int n) {

   // bool isPrime = true;
    for (int j = 2; j <= n /2; j++) {

        //�ͱ���С�����е���������������������֤������
        if ((n % j) == 0) {

            //�����ˣ����Ǻ���
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> vt;
    for(int i = 100; i <= 200; i++) {
        if(IsPrime(i)) {
            vt.push_back(i);
        }
    }
    if(vt.size() == 0) {
        printf("NULL\n");
    } else {
        vector<int>::iterator it;
        for(it = vt.begin(); it != vt.end(); it++) {
            printf("%d ", *it);
        }
        printf("\n");
    }
    return 0;
}
