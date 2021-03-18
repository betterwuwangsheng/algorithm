#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int length, int val) {
    int result = -1;
    int left = 1, right = length;

    while(left <= right) {
       int mid = left + (right - left) >> 1;

        //�м�ֵ >= ������ֵ -> �п������м�ֵ����߻��и�����
        if(a[mid] >= val) {

            //�ݴ� mid
            result = mid;

            //���м�ֵ����߿��ܻ��и�����
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return result;
}
int main() {
    int a[6];
    for(int i = 1; i <= 6; i++){
        a[i] = i;
    }
    sort(a + 1, a + 7);
    for(int i = 1; i <= 6; i++ ){
        cout << a[i] << " ";
    }

    cout << endl;
    int res = binarySearch(a, 6, 2);
    cout << res << endl;
}
