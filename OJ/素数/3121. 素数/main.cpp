#include <bits/stdc++.h>

using namespace std;

//判断是否为素数 -> 小学生做法
bool IsPrime(int n) {

   // bool isPrime = true;
    for (int j = 2; j <= n /2; j++) {

        //和比它小的所有的数相除，如果都除不尽，证明素数
        if ((n % j) == 0) {

            //除尽了，则是合数
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
