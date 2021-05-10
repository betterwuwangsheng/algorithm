#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){//与 5 的 N 次方相除 得的的数相加
        int k;
        cin >> k;
        int cnt = 0;
        while(k){
            cnt += k/5;
            k = k / 5;
        }
        cout << cnt << endl;
    }
}
