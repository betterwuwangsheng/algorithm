#include <bits/stdc++.h>

using namespace std;

struct Student {

    string id;
    string name;

    int score[3];
    int sum;
};
bool cmp(Student a, Student b) {
    if(a.sum != b.sum)
        return a.sum > b.sum;
    return a.id < b.id;
}
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {

        int n;
        cin >> n;
        Student stu[n];

        for(int j = 0; j < n; j++) {
            int sum = 0;

            cin >> stu[j].id >> stu[j].name;
            for(int z = 0; z < 3; z++) {

                cin >> stu[j].score[z];
                sum += stu[j].score[z];
            }
            stu[j].sum = sum;
        }

        sort(stu, stu + n, cmp);

        printf("case #%d:\n", i);
        for(int j = 0; j < n; j++) {
            cout << stu[j].id << " " << stu[j].name << " ";
            for(int z = 0; z < 3; z++)
                cout << stu[j].score[z] << " ";
            cout << endl;
        }
    }
    return 0;
}
