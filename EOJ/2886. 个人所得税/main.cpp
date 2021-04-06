#include <bits/stdc++.h>

using namespace std;

int main() {
    double salary;
    cin >> salary;

    double tax;

    double x = (salary - 1500) * 1.0;
    if (salary <= 1500)
        tax = 0;
    else if (1500 < salary && salary <= 3000)
        tax = 0.05 * x;
    else if (3000 < salary && salary <= 5000)
        tax = 0.1 * x;
    else if (5000 < salary && salary <= 10000)
        tax = 0.15 * x;
    else
        tax = 0.2 * x;
    printf("%.2f", tax);
    return 0;
}
