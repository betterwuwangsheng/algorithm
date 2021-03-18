#include <bits/stdc++.h>

using namespace std;

int a[6];
int b[6];
int res[6];
int main() {

    int p;
    cin >> p;

    for(int i = 1; i <= 6; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= 6; i++) {
        cin >> b[i];
    }

    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6; j++) {

            //向上点数之和对 p（人数）取模
            res[(a[i] + b[j]) % p]++;
        }
    }

    //向上点数之和对 p（人数）取模，模出来的  恰好对应 p 个人
    int flag = 1;
    for(int i = 1; i < p; i++)
        if(res[i] != res[i - 1])
            flag = 0;
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
