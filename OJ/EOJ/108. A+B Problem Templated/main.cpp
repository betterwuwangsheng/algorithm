#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    Solution() {}
    ~Solution() {}
    /**
     * [完成A+B的计算]
     * @param  a [整数A]
     * @param  b [整数B]
     * @return   [A+B的值]
     */
    int solve(int a, int b) {
        // TODO
        return a + b;
    }
};
//判题程序为：

/* 你的代码将被嵌入在这个部分 */


int main() {
    Solution* s = new Solution();
    int a, b;
    cin >> a >> b;
    /* 输入及处理部分，细节隐藏不表 */
    cout << s -> solve(a, b) << endl;
    /* 后续处理部分，细节隐藏不表 */
    return 0;
}
