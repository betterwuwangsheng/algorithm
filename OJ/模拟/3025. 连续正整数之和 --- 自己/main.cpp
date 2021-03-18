#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d",&T);
    int i;
    for(i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        //连续整数和
        int sum = 0;
        for(int j = 1; j <= N / 2; j++) {
            int temp = j;

            //当和 < N
            while(sum < N) {
                sum += temp;
                t++;
            }
        }
    }
    return 0;
}
