#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned n, low16, high16;
    while(cin>>n) {

        //num & xxx...111 操作获取某位数字
        low16 = n & 0x0000FFFF;//low16
        high16 = (n & 0xFFFF0000) >> 16; //high16
        high16 ^=  low16;
        low16 = (~low16) << 16;
        printf("%X\n", high16 + low16);
    }
    return 0;
}
