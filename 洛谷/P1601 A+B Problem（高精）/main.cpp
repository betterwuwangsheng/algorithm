#include <bits/stdc++.h>

using namespace std;

/**
题目描述
高精度加法，相当于a+b problem，不用考虑负数.

输入格式
分两行输入。a,b \leq 10^{500}a,b≤10
500


输出格式
输出只有一行，代表a+ba+b的值

输入输出样例
输入 #1复制
1
1
输出 #1复制
2
输入 #2复制
1001
9099
输出 #2复制
10100
*/
const int MX = 1e5;
string x, y;
int a[MX], b[MX], c[MX];
int la, lb, lc;
int main() {
    //    int a, b;
    //    cin >> a >> b;
    //    cout << a + b << endl;

    //    unsigned long long a, b;
    //    cin >> a >> b;
    //    cout << a + b << endl;

    // 1. 字符串读入
    cin >> x >> y;

    la = x.length();
    lb = y.length();

    for (int i = 0; i < la; i++) {
        // 2. 字符串 x 转换为数组 a
        a[la - i] = x[i] - '0';
    }
    for (int i = 0; i < lb; i++) {
        // 2. 字符串 y 转换为数组 b
        b[lb - i] = y[i] - '0';
    }

    lc = max(la, lb);

    // 3. 竖式加法
    //个位开始
    for (int i = 1; i <= lc; i++) {
        c[i] += a[i] + b[i];

        //进位
        c[i + 1] = c[i] / 10;

        //
        c[i] %= 10;
    }

    // 4. 消去前导 0
    //最高位有进位 -> 长度增加 1
    if (c[lc + 1] > 0)
        lc++;

    // 5. 倒序输出
    for (int i = lc; i >= 1; i--) {
        cout << c[i];
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

//用数组存储大整数
//逢十进一
const int MAXN = 1e6 + 10;

int a[MAXN];

// //逢十进一模板(加 & 更快,避免复制)
// vector<int> add(vector<int>& A, vector<int>& B) {
//     //保存结果
//     vector<int> ans;

//     //进位(初始时为 0)
//     int c = 0;

//     //遍历
//     for (int i = 0; i < A.size() || i < B.size(); ++i) {
//         //计算进位(长度不一致则只加长的)
//         if (i < A.size())
//             c += A[i];
//         if (i < B.size())
//             c += B[i];

//         //当前位
//         ans.push_back(c % 10);

//         //进位
//         c /= 10;
//     }

//     //最高位还有进位
//     if (c)

//         //压入 1
//         ans.push_back(1);

//     //返回结果 vector 数组
//     return ans;
// }
// int main() {
//     //读入 a,b 以字符串形式
//     string a, b;
//     cin >> a >> b;  // a = "123456"

//     //存储每一位数字
//     vector<int> A, B;

//     //逆序遍历字符串并将每一个字符转换为 int 类型的数据
//     //并依次存入 vector 数组
//     for (int i = a.size() - 1; i >= 0; --i)  // A = [6,5,4,3,2,1]
//         A.push_back(a[i] - '0');
//     for (int i = b.size() - 1; i >= 0; --i)
//         B.push_back(b[i] - '0');

//     //调用加法
//     auto ans = add(A, B);

//     //输出(逆序)
//     for (int i = ans.size() - 1; i >= 0; --i)
//         printf("%d", ans[i]);
//     return 0;
// }