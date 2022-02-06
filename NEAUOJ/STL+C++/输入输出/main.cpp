#include <ctime>
#include <iostream>

using namespace std;
int main() {
    // 产生随机种子
    srand(time(0));

    // freopen("文件名","w/r 读写", stdout / stdin);

    // 写入数据
    // freopen("1.in", "w", stdout);

    // printf("%d %d", rand(), rand());
    // 读入文件数据
    freopen("1.in", "r", stdin);

    // 写入
    freopen("1.out", "w", stdout);

    // 从文件读入
    int a, b;
    scanf("%d %d", &a, &b);

    // rand() 随机函数 -> 在自己电脑上执行这个语句产生的值是不会变的
    // 要让值会变要设置随机种子
    printf("%d\n", a + b);
    return 0;
}