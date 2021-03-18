#include <bits/stdc++.h>

using namespace std;

/**
����ɸ��
     1. ���� bool ������ prime[] ��СΪ n + 1 .
        �Ȱ����е��±�Ϊ�����ı�Ϊ true,
        �±�Ϊż���ı�Ϊ false.
     2. for(i = 3; i <= sqrt(n); i += 2 ){
            if(prime[i])
                for(j = i + i; j <= n; j += i )
                    prime[j]=false;
        }
     3. ������ bool �����е�ֵΪ true �ĵ�Ԫ���±꣬
        ��������� n ���ڵ�������

        ���ذ汾��ɸȥ 2 4 6 8 ...
                   ɸȥ 3 6 9 13....
        �ռ��汾��Ψһ�ֽⶨ�� = ������������
����: ֻ�� 1 ������������
*/
#include<stdio.h>
#include<math.h>

#define N 200

//�Ƿ�Ϊ����
//1 -> ����
//0 -> ����
bool is_prime[N] ;

int main() {

    //��ʼ�� bool ���� -> �� 1 ��ʼ����
    for(int i = 2; i <= N; i++) {
        is_prime[i] = true;
    }
    /**
        �ж�����
    */
    for(int i = 2; i * i < N; i++) {

        //1 -> ����
        if(is_prime[i])

            //ȥ������ -> ���Ϊ false -> ����
            // 7 -> 7 * 7 = 49 -> 49 + 7 = 56
            for(int j = i * i; j < N; j += i)

                //���Ϊ false -> ����
                is_prime[j] = false;
    }

    vector<int> vt1;
    vector<int> vt2;
    vector<int> res;
    for(int i = 1; i < 200; i++)
        if(is_prime[i])
            vt1.push_back(i);
    for(int i = 1; i <= 99; i++)
        if(is_prime[i])
            vt2.push_back(i);
    set_difference(vt1.begin(), vt1.end(), vt2.begin(), vt2.end(), inserter(res, res.begin()));

    if(res.size() == 0) {
        printf("NULL \n");
    } else {
        vector<int>::iterator it;
        for(it = res.begin(); it != res.end(); it++) {
            printf("%d ", *it);
        }
    }
    return 0;
}
