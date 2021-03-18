#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF) {

        //a < b 交换
        if(a < b) {
            swap(a, b);
        }

        //当除数 > 0 时
        while(b > 0) {

            //取余
            int temp = a % b;

            //顶替
            a = b;
            b = temp;
        }
        cout << a << endl;
    }
    return 0;
}
