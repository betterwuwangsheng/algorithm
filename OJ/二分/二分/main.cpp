#include <bits/stdc++.h>

using namespace std;

/**
    ���ַ�������ʱ���Ż�
    ���ֲ���: ����
    ���ִ𰸣���㶨��
*/

int binarySearch(int a[], int length, int key) {
    int result = -1;
    int left = 1, right = length;

    while(left <= right) {
        int mid = left + (right - left) >> 1;
        if(a[mid] >= key) {

            result = mid;
            right = mid - 1;

        } else {

            left = mid + 1;
        }
    }

    return result;
}
int main() {
    int a[] = {1,21,2131,51,61,9};
    int res = binarySearch(a, 6, 1);
    cout << res << endl;
}
