#include <bits/stdc++.h>

using namespace std;

/**
Problem Description
Բ����Χ����2n���ˡ�����n�����Ǻ��ˣ�����n�����ǻ��ˡ�����ӵ�һ���˿�ʼ������������m���ˣ��������������ˣ�Ȼ��ӱ���������֮��ʼ�������ٽ������ĵ�m���˴����������˷������ϴ���Χ����Բ���ϵ��ˡ�����Ԥ��Ӧ��ΰ�����Щ�����뻵�˵���λ����ʹ���ڴ���n����֮��Բ����Χ����ʣ���n����ȫ�Ǻ��ˡ�


Input
�������ݣ�ÿ���������룺���˺ͻ��˵�����n��<=32767��������m��<=32767����


Output
����ÿһ�����ݣ����2n����д��ĸ����G����ʾ���ˣ���B����ʾ���ˣ�50����ĸΪһ�У���������ֿհ��ַ����������ݼ�����һ���С�


Sample Input
2 3
2 4


Sample Output
GBBG

BGGB

*/

///ģ��Բ��
vector<int> person;

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {

        person.clear();
        for(int i = 0; i < 2 * n; i++) {

            ///�� person ��β�����һ��ֵΪ i ��Ԫ��
            person.push_back(i);
        }

        ///ɱ�� n ������
        int pos = 0;

        for(int i = 0; i < n; i++) {

            ///ѭ��
            pos = (pos + m - 1) % person.size();

            ///ɱ�� n ������
            ///erase(int n); ɾ��ĳ��Ԫ��
            person.erase(person.begin() + pos);
        }

        int cnt = 0;
        for(int i = 0; i < 2 * n; i++) {

            //ÿ 50 ����ĸ���һ������
            if(i % 50 == 0 && i)

                ///���� != �س�
                cout << endl;

            //���µ��˶��Ǻ��ˣ�ֻ�к��˲Ż� i == person[cnt]
            if(cnt < (int)person.size() && person[cnt] == i) {

                ///���� -> person[cnt] = i(��ֵ���±���ͬ)
                printf("G");
                cnt++;
            } else

                ///����
                printf("B");
        }
        cout << endl  << endl;
    }
    return 0;
}
