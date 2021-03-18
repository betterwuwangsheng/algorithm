#include <bits/stdc++.h>

using namespace std;

/* PreCondition:
     aaaabbbb和ccccdddd表示分数aaaa/bbbb和cccc/dddd,分子分母最多4位数
   PostCondition:
     计算两个分数之和，返回其最简分数xxxxxxxxyyyyyyyy
*/

//********** Specification of FractionSum **********
long long FractionSum(int aaaabbbb, int ccccdddd) {
    //TODO: your function definition
    int a = aaaabbbb / 10000;
    int b = aaaabbbb % 10000;
    int c = ccccdddd / 10000;
    int d = ccccdddd % 10000;

    int upper = a * d + b * c;
    int low = b * d;

    int ans = upper * 100000000 / low + low;
    return ans;
}
int main() {
    int a, b, c, d;
    long long r;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    r = FractionSum(a * 10000 + b, c * 10000 + d);

    printf("%d/%d+%d/%d=%lld/%lld.\n", a, b, c, d,
           r / 100000000, r % 100000000);
    return 0;
}
