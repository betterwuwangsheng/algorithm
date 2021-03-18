#include <bits/stdc++.h>

using namespace std;

char IntToChar(int target) {
    if(target < 10)
        return target + '0';
    else
        return target - 10 + 'A';
}

//任意进制转换
void Convert(int n, int x) {

    vector<char> res;
    if(n == 0) {
        res.push_back('0');
    } else {
        while(n != 0) {
            res.push_back(IntToChar(n % x));
            n /= x;
        }
    }

    //逆序输出
    for(int i = res.size() - 1; i >= 0; --i) {
        printf("%C", res[i]);
    }
    printf("\n");
}
int main() {
    unsigned int n;
    while(scanf("%d", &n) != EOF) {
        Convert(n, 16);
    }
    return 0;
}
