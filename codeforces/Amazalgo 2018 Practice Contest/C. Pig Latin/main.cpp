#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word, ans;
        int flag = 1;//����Ƿ�Ϊ��һ������
        do {
            cin >> word;
            word[0] = tolower(word[0]);//����ĸ��д
            ans = word.substr(1, word.length() - 1) + word[0] + "ay";//����
            if (flag)//���׸�����
                ans[0] = toupper(ans[0]);//��д
            cout << ans << " ";
            flag = 0;//�ı���
        } while (getchar() != '\n');
        cout << endl;
    }
    return 0;
}
