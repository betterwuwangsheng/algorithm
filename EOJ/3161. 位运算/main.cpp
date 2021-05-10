#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    unsigned int sum = 0;
    int p, n;
    cin >> sum >> p >> n;
    for(int i = 0; i < n;i++){
        sum = sum ^ (1 << (p - i));
    }
    cout << sum << endl;
    return 0;
}
