#include <bits/stdc++.h>

using namespace std;

int a[5010];
int main() {

    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < N; i++) {
        for(int j = i + 1; j <= N; j++) {
            if(a[i] > a[j]) {
                cout << a[i] << " " << a[j] << endl;
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 1; i <= N; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
