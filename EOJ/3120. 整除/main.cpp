#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    while(scanf("%lld", &num) != EOF){
        if(num % 3 == 0 && num % 5 == 0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
