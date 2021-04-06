#include <bits/stdc++.h>

using namespace std;

int main() {
    //判断不相交就四种情况，只有在另一个矩形的左右上下。
    int x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        //大于等于四个角 -> 不相交
        if ((y4 >= y1) || (x4 <= x1) || (x3 >= x2) || (y3 <= y2))
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
