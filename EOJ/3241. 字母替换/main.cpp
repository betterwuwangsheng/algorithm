#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    for(int cnt = 0; cnt < T; cnt++) {
        string str;
        cin >> str;

        int len = str.size();
        for(int i = 0; i < len; i++) {
            if(i % 2 == 0 && str[i] >= 'A' && str[i] <= 'Z'){

                //将大写转换成小写
                str[i] = tolower(str[i]);
            }
        }

        cout << "case #"<< cnt << ":" << endl;
        for(int i = 0; i < len; i++){
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
