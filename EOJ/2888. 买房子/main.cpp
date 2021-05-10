#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m, i;
    while(cin >> n >> k >> m) {

        //薪水
        double salary = (double)n;

        //积蓄
        double money = (double)n;

        //房价
        double price = 270;


        //挣钱
        for(i = 1; i <= 30; i++) {

            if(money >= price) {
                //cout << i << endl;
                break;
            }

            else {
                //薪水增加
                salary += salary * m * 0.01;
                money += salary;

                //房价增加
                price += price * k * 0.01;
                //cout << "money: " <<  money << " price: " << price << endl;
            }
        }
        if(i > 29) {
            cout << "Impossible" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
