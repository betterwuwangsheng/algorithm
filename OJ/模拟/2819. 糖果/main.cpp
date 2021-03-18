#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {

        //糖的数量
        int sugar;
        cin >> sugar;

        //糖纸数量 = 糖的数量
        int paper = sugar;

        while(paper >= 3){

            //可以换的糖的数量
            int temp = paper / 3;

            //糖的数量增加
            sugar += temp;

            //糖纸数量增加
            paper -= 2 * temp;
        }
        cout << sugar << endl;

    }
    return 0;
}
