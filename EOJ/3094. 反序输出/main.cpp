#include <bits/stdc++.h>

using namespace std;

int main() {

    //��������
    int n;
    scanf("%d", &n);

    vector<int> vt;

    //��������
    while(n--) {
        int num;
        scanf("%d", &num);

        vt.push_back(num);
    }

    //��תvector
    reverse(vt.begin(), vt.end());

    //������
    vector<int>::iterator it;
    long long int sum = 0;
    double avg;
    for(it = vt.begin(); it != vt.end(); it++) {

        //�������
        cout << (*it) << ' ';

        //���
        sum += (*it);
    }
    avg = sum / (double)vt.size();
    printf("\n%lld %.2lf", sum, avg);

    return 0;
}
