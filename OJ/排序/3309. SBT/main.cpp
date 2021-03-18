#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    while(cin >> N) {
        int min,max;
        scanf("%d", &min);
        max = min;
        for(int i = 1; i < N; i++) {
            int temp;
            scanf("%d", &temp);
            min = (min <= temp) ? min : temp;
            max = (max >= temp) ? max : temp;
        }
        if(min < 10 || max > 30 || max - min > 3)
        printf("Is not SBT\n");
        else
            printf("Is SBT\n");
    }
}
