#include <bits/stdc++.h>

using namespace std;

int main() {
    int h[3];
    for(int i = 0; i < 3; ++i)
        scanf("%d", &h[i]);
    for(int i = 0; i < 3; ++i){
        if(h[i] < 168)
            printf("CRASH %d ", h[i]);
    }
    return 0;
}
