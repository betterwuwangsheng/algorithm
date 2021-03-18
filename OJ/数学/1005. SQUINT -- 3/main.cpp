#include <iostream>

using namespace std;

//开根号 -> 二分法
/**
求√A，等价于求方程的非负根（解）。
求解方程近似根的方法中，最直观、最简单的方法是二分法。
    1. 先找出一个区间 [a, b]，使得f(a)与f(b)异号。
    2. 求该区间的中点 m = (a+b)/2，并求出 f(m) 的值。
    3. 若 f(m) * f(a) < 0 则取 [a, m] 为新的区间, 否则取 [m, b].
    4. 重复第2和第3步至理想精确度为止。

*/
int main() {
    cout << "Hello world!" << endl;
    return 0;
}
