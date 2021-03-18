#include <bits/stdc++.h>

using namespace std;

int check(int a){
    int cnt = 0;
    while(a != 0){
        a /= 10;
        cnt++;
    }
    return cnt;
}
int main() {

    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        cout << check(a + b) << endl;
    }
    return 0;
}
