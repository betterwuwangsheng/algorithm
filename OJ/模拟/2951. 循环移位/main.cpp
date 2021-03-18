#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int a, n;
    cin >> a >> n;
    cout << ((a << (32 - n)) | (a >> n)) << endl; //或运算 有 1 则 1
    return 0;
}
