#include <iostream>

using namespace std;

const int MX = 1e6 + 10;
bool is_prime[MX];
int main() {
    int N, M;
    while(cin >> N >> M) {
        int cnt = 0;

        //初始化
        for(int i = 2; i <= MX; i++) {

            //默认是素数
            is_prime[i] = true;
        }

        //判断素数
        for(int i = 2; i * i <= M; i++) {

            //是素数
            if(is_prime[i])

                //去除 他的平方 -> 步长为自己
                for(int j = i * i; j <= M; j += i)
                    is_prime[j] = false;
        }

        for(int i = N; i <= M; i++) {
            if(is_prime[i])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
