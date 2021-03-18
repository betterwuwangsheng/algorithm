#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
���ڱ��ʽn^2+n+41����n�ڣ�x,y����Χ��ȡ����ֵʱ������x,y��(-39<=x<y<=50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ������


Input
���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x=0,y=0ʱ����ʾ������������в�������


Output
����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK",�����������Sorry��,ÿ�����ռһ�С�


Sample Input
0 1
0 0


Sample Output
OK


*/

//�ж�����
bool isPrime(int a){
    for(int i = 2; i <= (int)sqrt(a); i++){
        if(a % i == 0)
            return false;
    }
    return true;
}
int main() {
    int x, y;

    //x = 0,y = 0ʱ����ʾ������������в�������
    while(cin >> x >> y && (x != 0 || y != 0)) {
        int flag = 1;

        //�������Ĵ�С��һʱ -> ���ǽ���
        if(x > y)
            swap(x, y);
        for(int i = x; i <= y; i++) {
            int z = pow(i, 2) + i + 41;

            //��������
            if(!isPrime(z)) {
                flag = 0;
                cout << "Sorry" << endl;
                //����ѭ��
                break;
            }
        }
        if(flag)
            cout << "OK" << endl;
    }
    return 0;
}
