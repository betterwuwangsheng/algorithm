#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

int n, a, b, c, d;

// 转换为字符串方法
template <typename T>
string to_string(T value) {
    ostringstream os;
    os << value;
    return os.str();
}

int main() {
    scanf("%d", &n);

    for (int i = 10000; i < 1000000; ++i) {
        string i_string = to_string(i);

        string temp = i_string;
        int len = i_string.size();
        int num, sum = 0;
        for (int j = 0; j < len; ++j) {
            num = i_string[j] - '0';
            sum += num;
        }

        // 反转字符串
        reverse(i_string.begin(), i_string.end());
        if (sum == n && i_string == temp)
            printf("%d\n", i);
    }
    return 0;
}