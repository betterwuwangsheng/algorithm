#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();

    int caseNum = 0;
    while (t--) {

        string a, b;
        getline(cin, a);
        getline(cin, b);

        //转换为小写
        for (int i = 0; i < b.length(); ++i)
            b[i] = tolower(b[i]);
        for (int i = 0; i < a.length(); ++i)
            a[i] = tolower(a[i]);

        int p = -1;
        while (true) {
            p = b.find(a, p + 1);
            if (p == -1 || (p == 0 || b[p - 1] == ' ') && (p + a.size() == b.size() || b[p + a.size()] == ' '))
                break;
        }
        printf("case #%d:\n", caseNum++);
        if (p + 1)
            printf("%d\n", p + 1);
        else
            printf("None\n");
    }
}
