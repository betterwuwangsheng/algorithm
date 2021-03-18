#include <iostream>

using namespace std;

void solve(int num) {
    if(num == 0)
        cout << "no ";
    else if(num == 1)
        cout << "a cup of ";
    else
        cout << num <<" cups of ";
}
int main() {
    int T;
    cin >> T;
    while(T--) {
        int a,b;
        cin >> a >> b;
        int num = a + b;
        cout << "LBB made ";
        solve(a);
        cout <<"coffee today." << endl;

        cout << "JDG made ";
        solve(b);
        cout <<"coffee today." << endl;

        cout << "BOSS had ";
        solve(num);
        cout <<"coffee today." << endl;
    }
    return 0;
}
