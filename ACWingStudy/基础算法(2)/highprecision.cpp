#include <bits/stdc++.h>

using namespace std;

//用数组存储大整数
//逢十进一
const int MAXN = 1e6 + 10;

int a[MAXN];

//逢十进一模板(加 & 更快,避免复制)
vector<int> add(vector<int>& A, vector<int>& B) {
    //保存结果
    vector<int> ans;

    //进位(初始时为 0)
    int c = 0;

    //遍历
    for (int i = 0; i < A.size() || i < B.size(); ++i) {
        //计算进位(长度不一致则只加长的)
        if (i < A.size())
            c += A[i];
        if (i < B.size())
            c += B[i];

        //当前位
        ans.push_back(c % 10);

        //进位
        c /= 10;
    }

    //最高位还有进位
    if (c)

        //压入 1
        ans.push_back(1);

    //返回结果 vector 数组
    return ans;
}

vector<int> minus() {}
int main() {
    //读入 a,b 以字符串形式
    string a, b;
    cin >> a >> b;  // a = "123456"

    //存储每一位数字
    vector<int> A, B;

    //逆序遍历字符串并将每一个字符转换为 int 类型的数据
    //并依次存入 vector 数组
    for (int i = a.size() - 1; i >= 0; --i)  // A = [6,5,4,3,2,1]
        A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; --i)
        B.push_back(b[i] - '0');

    //调用加法
    vector<int> ans = add(A, B);

    //输出(逆序)
    for (int i = ans.size() - 1; i >= 0; --i)
        printf("%d", ans[i]);
    return 0;
}