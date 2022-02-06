// #include <algorithm>
// #include <iostream>
// #include <vector>

// using namespace std;

// int n, num, a;
// vector<int> v;
// int main() {
//     scanf("%d", &n);
//     while (n--) {
//         scanf("%d ", &num);
//         v.push_back(num);
//     }
//     scanf("%d", &a);

//     vector<int>::iterator it;
//     int flag = 0;
//     for (it = v.begin(); it != v.end(); ++it) {
//         if (*it == a) {
//             flag = 1;
//             printf("%d\n", it - v.begin() + 1);
//             break;
//         }
//     }

//     if (!flag)
//         printf("-1\n");
//     return 0;
// }

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, num, value;
vector<int> v;
int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d ", &num);
        v.push_back(num);
    }
    scanf("%d", &value);

    vector<int>::iterator it = find(v.begin(), v.end(), value);
    cout << (it != v.end() ? it - v.begin() + 1 : -1) << endl;
    return 0;
}