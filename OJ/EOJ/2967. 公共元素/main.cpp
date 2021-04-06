#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    while(t--) {
        int lenfirst;
        int lensecond;
        int lenthird;

        set<int> first, second, third, temp, ans;
        cin >> lenfirst >> lensecond >> lenthird;
        int num;
        for(int i = 0; i < lenfirst; ++i) {
            cin >> num;
            first.insert(num);
        }
        for(int i = 0; i < lensecond; ++i) {
            cin >> num;
            second.insert(num);
        }
        for(int i = 0; i < lenthird; ++i) {
            cin >> num;
            third.insert(num);
        }

        set_intersection(first.begin(), first.end(),
                         second.begin(), second.end(),
                         inserter(temp, temp.begin())
                        );
        set_intersection(third.begin(), third.end(),
                         temp.begin(), temp.end(),
                         inserter(ans, ans.begin())
                        );
        printf("case #%d:\n", caseNum++);
        set<int>::iterator it;

        if(ans.size() == 0)//如果三个数组中没有公共元素，则输出-1。
            printf("-1\n");
        for(it = ans.begin(); it != ans.end(); ++it)
            printf("%d ", *it);
        printf("\n");

    }
    return 0;
}
