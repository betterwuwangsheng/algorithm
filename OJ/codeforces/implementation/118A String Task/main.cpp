#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        //ת��ΪСд
        s[i] = tolower(s[i]);

        //��Ԫ��
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' ||
            tolower(s[i]) == 'i' || tolower(s[i]) == 'o' ||
            tolower(s[i]) == 'u' || tolower(s[i]) == 'y')

            //ɾ��
            s.erase(s.begin() + i--);
        else
            //����
            s.insert(s.begin() + i++, '.');
    }
    cout << s << endl;
    return 0;
}
