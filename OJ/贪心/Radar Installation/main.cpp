#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAXN = 1010;

//雷达安装区间
struct Interval {
    double left;
    double right;
};

//岛屿坐标数组
Interval interval[MAXN];

//左端点升序
bool cmp(Interval x, Interval y) {
    return x.left < y.left;
}

//反向思考 -> 以岛屿坐标做圆 -> 判断与坐标轴是否有交点
// -> 多个区间重叠(尽可能重叠) -> 具有相同的以岛屿坐标做圆 -> 判断与坐标轴是否有交点
int main() {

    //多组样例输入
    int n, d;
    int k = 0;
    while(scanf("%d%d", &n, &d) != EOF) {

        // 0 0 结束
        if(n == 0 && d == 0)
            break;

        //标记岛屿与 x 轴是否相离 ? -> 无法覆盖
        bool flag = true;

        //读入 n 行数据 -> 岛屿坐标
        for(int i = 0; i < n; ++i) {
            int x, y;
            scanf("%d%d", &x, &y);

            //无法完全覆盖
            if(y > d) {
                flag = false;
            } else {

                //sqrt() 操作浮点数
                interval[i].left = x - sqrt(d * d * 1.0 - y * y * 1.0);
                interval[i].right = x + sqrt(d * d * 1.0 - y * y * 1.0);
            }
        }

        //无法覆盖
        if(!flag)
            printf("Case %d: %d\n", ++k, -1);
        else {

            //排序
            sort(interval, interval + n, cmp);

            //当前在海岸线的位置
            double current = interval[0].right;

            int ans = 1;
            for(int i = 1; i < n; ++i) {
                if(interval[i].left <= current) {

                    //将就小的
                    current = min(current, interval[i].right);
                } else {

                    //没有重叠部分 -> 新建雷达站
                    current = interval[i].right;
                    ans++;
                }
            }
            printf("Case %d: %d\n", ++k, ans);
        }
    }
    return 0;
}
