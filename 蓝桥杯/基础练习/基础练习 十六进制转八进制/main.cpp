#include <algorithm>
#include <iostream>

using namespace std;

typedef long long LL;

int n;
string value;

// /**
//  * @brief 将十六进制数转换为十进制
//  *
//  * @param num 字符串类型的数值
//  * @return LL 返回对应的十进制数
//  */
// LL h2d(string num) {
//     int len = num.size();
//     int temp;
//     LL res = 0;
//     for (int i = len - 1; i >= 0; --i) {
//         if (num[i] >= 'A' && num[i] <= 'F')
//             temp = num[i] - 'A' + 10;
//         else
//             temp = num[i] - '0';
//         res += temp * (LL)pow(16, len - i - 1);
//     }
//     return res;
// }

// vector<int> d2b(LL num) {
//     vector<int> v;
//     while (num) {
//         v.push_back(num % 2);
//         num /= 2;
//     }
//     return v;
// }

// vector<int> b2oct(vector<int> num) {
//     vector<int> res;
//     int ans = 0;
//     int len = num.size();
//     for (int i = 0, cnt = 0; i < len; ++i, ++cnt) {
//         ans += num[i] * (LL)pow(2, cnt);
//         if ((cnt + 1) % 3 == 0) {
//             res.push_back(ans);
//             ans = 0;
//             cnt = -1;
//         }
//     }
//     return res;
// }

int main() {
    // 每个十六进制数长度不超过 100000 -> 长度很长
    // long long 搞不定
    scanf("%d", &n);

    while (n--) {
        cin >> value;

        // 翻转
        reverse(value.begin(), value.end());
        cout << "reverse_value: " << value << endl;
        int len = value.size();
        for (int i = 0; i < len; ++i) {
        }
    }
    return 0;
}