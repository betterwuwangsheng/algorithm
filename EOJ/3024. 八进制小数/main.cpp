//#include <bits/stdc++.h>

//using namespace std;

//此方法错误
//int main() {
//
//    int t;
//    cin >> t;//用例数目
//    string s;
//
//    int caseNum = 0;
//
//    while(t--) {
//        double ans = 0;
//        cin >> s;
//        int len = s.size();//获得小数点后字符串的长度
//        for(int i = 2; i < len; ++i) { //遍历求值
//            ans += (double)(s[i] - '0') * pow(0.125, i - 1);//转换为 8 进制
//        }
//
//        //％g 是用于浮点数的省略格式
//        //自动判断 用 %e 或 %f 格式 输出为好
//        //判断标准是： 哪个短用哪个
//        //打印时，省去小数部分后面多余的0。
//        //例如 1.23000, 输出成 1.23.
//        printf("case #%d:\n%.200g\n", caseNum++, ans);
//    }
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;

char num[51], ans[155];

int main() {
    int t, caseNum = 0, len, i, j, k, tmp;
    scanf("%d\n", &t);

    while(t--){
        gets(num);

        len = strlen(num);
        k = 0;

        memset(ans, 0, sizeof(ans));

        for (i = len - 1; i >= 2; --i) {
            int n = num[i] - '0'; //转化为 int

            for (j = 0; j < k || n; ++j) {

                tmp = 10 * n + (j < k ? ans[j] - '0' : 0);
                ans[j] = tmp / 8 + '0';
                n = tmp % 8;
            }
            k = j;
        }
        printf("case #%d:\n0.%s\n", caseNum++, ans);
    }
    return 0;
}
