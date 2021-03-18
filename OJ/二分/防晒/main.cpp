#include <bits/stdc++.h>

using namespace std;

/**
��Cͷ��ţ�����չ�ԡ����iͷ��ţ��ҪminSPF[i]��maxSPF[i]��λǿ��֮������⡣

ÿͷ��ţ���չ�ԡǰ����Ϳ��ɹ˪����ɹ˪��L�֣�Ϳ�ϵ�i��֮��������յ�������ǿ�Ⱦͻ��ȶ�ΪSPF[i]����i�ַ�ɹ˪��cover[i]ƿ��

���������������ͷ��ţ�����չ�ԡ��

�����ʽ
��һ����������C��L��

��������C�У�������ÿ������һͷţ��minSPF��maxSPFֵ,����i������minSPF[i]��maxSPF[i]��

�ٽ�������L�У�������ÿ������һ�ַ�ɹ˪��SPF��coverֵ,����i������SPF[i]��cover[i]��

ÿ�е�����֮���ÿո������

�����ʽ
���һ������������������������ţ�չ�ԡ����ţ��Ŀ��

���ݷ�Χ
1��C,L��2500,
1��minSPF��maxSPF��1000,
1��SPF��1000
����������
3 2
3 10
2 5
1 5
6 2
4 1
���������
2
*/

///�����������㷨����Hungarian algorithm��
///һ������ͼ�е����ƥ�����������ͼ�е���С�㸲������

typedef pair<int, int> PII;

const int N = 2510;

PII cows[N];

int n,m;
int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> cows[i].first >> cows[i].second;

    sort(cows, cows + n);

    map<int, int> spfs;

    for(int i = 0; i < m; i++) {
        int spf, cover;

        cin >> spf >> cover;
        spfs[spf] += cover;
    }

    int res = 0;

    spfs[0] = spfs[1001] = n;

    for(int i =0; i < n; i++) {

        auto cow = cows[i];
        auto it = spfs.upper_bound(cow.second);
        it--;

        if(it -> first >= cow.first && it -> first <= cow.second) {
            res++;
            if(--it -> second == 0)
                spfs.erase(it);
        }
    }

    cout << res << endl;
    return 0;
}
