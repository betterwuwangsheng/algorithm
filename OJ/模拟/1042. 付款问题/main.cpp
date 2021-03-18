#include <bits/stdc++.h>

using namespace std;

int money[7] = {100,50,20,10,5,2,1};
int main() {

    //测试数据组数
    int n;
    scanf("%d", &n);

    while(n--) {
        //读入数据
        int num;
        scanf("%d", &num);

        for(int i = 0; i < 7; i++){
            if(i == 0)

                //该阶段最大面值张数
                cout << num / money[i];
            else
                cout << " " << num / money[i];
            //剩下的钱
            num = num % money[i];
        }

        cout << endl;
    }
    return 0;
}

