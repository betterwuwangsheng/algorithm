#include <iostream>

// 引入 vector 头文件
#include <vector>

using namespace std;

// vector 数据类型
// 定义 vector 数组
vector<int> v;

int x;
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    // 遍历
    for (auto ele : v) {
        cout << ele << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }

    cout << endl;

    // 删除最后的元素
    v.pop_back();
    cout << v.size() << endl;

    // 二维 vector
    //  1024 行的 vector 数组
    vector<int> v[1024];
    return 0;
}