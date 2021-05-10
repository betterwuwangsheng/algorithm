#include <bits/stdc++.h>

using namespace std;

//int main() {
//    int t;
//    cin >> t;
//
//    int caseNum = 0, n, m;
//    while(t--) {
//        cin >> n >> m;
//        vector<int> vt;
//        for(int i = 1; i <= n; ++i)
//            vt.push_back(i);
//
//        //index 记录位置
//        //cnt 记录报数报到哪里
//        int index = 0, cnt = 0;
//
//        printf("case #%d:\n", caseNum++);
//        //数组非空
//        while(!vt.empty()) {
//            cnt++;//报数
//            if(cnt == m) {
//
//                //删除该元素
//                vt.erase(vt.begin() + index);
//                cnt = 0;//置零
//            } else
//                index = (index + 1) % vt.size();
//
//            if(vt.size() == 1) {
//                cout << vt[0] << endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}
//
//int f(int n, int m) {
//    if(n == 1)
//        return n;
//    return (f(n - 1, m) + m - 1) % n + 1;
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    int caseNum = 0;
//    int n, m;
//    while(t--) {
//        cin >> n >> m;
//        printf("case #%d:\n%d\n", caseNum++, f(n, m));
//    }
//}

/**
       F(1) = 0
       F(N) = [F(N - 1) + M] % n （N > 1）
*/
int main() {
    int t;
    cin >> t;

    int caseNum = 0;
    int n, m;
    while(t--) {
        cin >> n >> m;
        int ans = 0;
        for(int i = 2; i <= n; i++) {
            ans = (ans + m) % i;
        }
        printf("case #%d:\n%d\n", caseNum++, ans + 1);
    }
}
