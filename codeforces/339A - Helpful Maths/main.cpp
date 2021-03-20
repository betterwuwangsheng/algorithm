#include <bits/stdc++.h>

using namespace std;

int a[10000];
int main() {
    int index = 0;
    while (scanf("%d+", &a[++index]) != EOF)
        ;
    sort(a + 1, a + index + 1);  //≈≈–Ú
    for (int i = 2; i < index; i++)
        printf("%d+", a[i]);
    printf("%d", a[index]);
    return 0;
}
