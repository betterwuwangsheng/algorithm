#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int sum = 0;
        map<long long, int> m;
        while(n--) {
            long long id;
            int score;

            cin >> id >> score;
            m.insert(map<long long, int>::value_type(id, score));
            sum += score;
        }

        double avg = 1.0 * sum / m.size();

        double s = 0;
        map<long long, int>::iterator it;
        for(it = m.begin(); it != m.end(); it++) {
            s += pow(avg - (it -> second), 2);
        }

        //分母为[公式]的目的是为了让方差的估计是无偏的
        printf("%.2lf %.2lf\n", avg, 1.0 * sqrt(s / (m.size() - 1)));
    }
    return 0;
}
