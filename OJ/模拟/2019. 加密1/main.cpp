#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int num;
    while(cin >> num) {
        unsigned short low, high;
        unsigned int res = 0;
        //交换 低 16 位和高 16 位
        low = (unsigned short)(num >> 16); //num >> 16 高 16 位
        high = (unsigned short)(num & 0x0000FFFF); //num & 0x0000FFFF 低十六位

               //此时的低 16 位按位取反
               low = ~low;

        //高 16 位与低 16 位进行异或运算，结果存储到高 16 位
        high ^= low;

        //按位或后赋值
        //存储到高 16 位
        res |= high;

        //左移后赋值
        res <<= 16;
        res |= low;

        printf("%X\n", res);
    }
    return 0;
}
