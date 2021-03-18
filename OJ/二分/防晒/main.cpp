#include <bits/stdc++.h>

using namespace std;

/**
有C头奶牛进行日光浴，第i头奶牛需要minSPF[i]到maxSPF[i]单位强度之间的阳光。

每头奶牛在日光浴前必须涂防晒霜，防晒霜有L种，涂上第i种之后，身体接收到的阳光强度就会稳定为SPF[i]，第i种防晒霜有cover[i]瓶。

求最多可以满足多少头奶牛进行日光浴。

输入格式
第一行输入整数C和L。

接下来的C行，按次序每行输入一头牛的minSPF和maxSPF值,即第i行输入minSPF[i]和maxSPF[i]。

再接下来的L行，按次序每行输入一种防晒霜的SPF和cover值,即第i行输入SPF[i]和cover[i]。

每行的数据之间用空格隔开。

输出格式
输出一个整数，代表最多可以满足奶牛日光浴的奶牛数目。

数据范围
1≤C,L≤2500,
1≤minSPF≤maxSPF≤1000,
1≤SPF≤1000
输入样例：
3 2
3 10
2 5
1 5
6 2
4 1
输出样例：
2
*/

///利用匈牙利算法：（Hungarian algorithm）
///一个二分图中的最大匹配数等于这个图中的最小点覆盖数。

typedef pair<int, int> PII;

const int N = 2510;

PII cows[N];

int n,m;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> cows[i].first >> cows[i].second;

    sort(cows, cows + n);

    map<int, int> spfs;

    for(int i = 0; i < m; i++) {
        int spf, cover;

        cin >> spf >> cover;
        spfs[spf] += cover;
    }

    int res = 0;

    spfs[0] = spfs[1001] = n;

    for(int i =0; i < n; i++) {

        auto cow = cows[i];
        auto it = spfs.upper_bound(cow.second);
        it--;

        if(it -> first >= cow.first && it -> first <= cow.second) {
            res++;
            if(--it -> second == 0)
                spfs.erase(it);
        }
    }

    cout << res << endl;
    return 0;
}
