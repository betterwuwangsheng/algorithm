#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数。


Input
输入数据有多组，每组占一行，由两个整数x，y组成，当x=0,y=0时，表示输入结束，该行不做处理。


Output
对于每个给定范围内的取值，如果表达式的值都为素数，则输出"OK",否则请输出“Sorry”,每组输出占一行。


Sample Input
0 1
0 0


Sample Output
OK


*/

//判断素数
bool isPrime(int a){
    for(int i = 2; i <= (int)sqrt(a); i++){
        if(a % i == 0)
            return false;
    }
    return true;
}
int main() {
    int x, y;

    //x = 0,y = 0时，表示输入结束，该行不做处理
    while(cin >> x >> y && (x != 0 || y != 0)) {
        int flag = 1;

        //两个数的大小不一时 -> 考虑交换
        if(x > y)
            swap(x, y);
        for(int i = x; i <= y; i++) {
            int z = pow(i, 2) + i + 41;

            //不是素数
            if(!isPrime(z)) {
                flag = 0;
                cout << "Sorry" << endl;
                //跳出循环
                break;
            }
        }
        if(flag)
            cout << "OK" << endl;
    }
    return 0;
}
