#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����


Input
���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ�����


Output
����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�


Sample Input
2
asdfasdf123123asdfasdf
asdf111111111asdfasdfasdf


Sample Output
6
9
*/
const int MAX_LEN = 1e5;
int res[MAX_LEN] = {0};

int main() {

    ///������������
    int n;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;

        int cnt = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] >= '0' && str[i] <= '9') {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
