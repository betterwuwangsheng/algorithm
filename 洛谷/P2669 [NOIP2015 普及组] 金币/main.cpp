#include <bits/stdc++.h>

using namespace std;

int main() {
    int K, N, coin = 0;
    cin >> K;                          //����������K
    for (N = 1; K - N >= 0; K -= N++)  //��1����ʿ�ɻ��1ö���
        coin += N * N;  //�ڽ�����������N�����ʿÿ��ɻ��Nö���
    cout << coin + K * N;  //�����ʿ�ܹ��ɻ�õĽ����
    return 0;
}