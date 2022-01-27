#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> num;
    vector<int> res;
    int input;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        num.push_back(input);
    }

    // 双重循环
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            res[i] += num[j]
        }
    }
    return 0;
}