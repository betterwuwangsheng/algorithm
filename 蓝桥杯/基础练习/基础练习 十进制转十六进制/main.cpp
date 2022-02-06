#include <iostream>
#include <vector>

using namespace std;

int a;

// 将十六进制的字符存储到数组中 -> 方便后续使用
char ascii[] = {48, 49, 50,  51,  52,  53,  54,  55,
                56, 57, 'A', 'B', 'C', 'D', 'E', 'F'};
int main() {
    scanf("%d", &a);
    if (a == 0)
        printf("0\n");
    vector<char> res;

    // 注意使用这种方法的时候是否从 0 开始
    // 有时候从 0 开始或造成 0 的丢失
    while (a) {
        int t = a % 16;
        a /= 16;
        res.push_back(ascii[t]);
    }

    vector<char>::reverse_iterator r_it;
    for (r_it = res.rbegin(); r_it != res.rend(); ++r_it)
        printf("%c", *r_it);
    return 0;
}