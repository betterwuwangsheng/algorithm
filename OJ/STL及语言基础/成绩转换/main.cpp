#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/**
Problem Description
����һ���ٷ��Ƶĳɼ�t������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;


Input
���������ж��飬ÿ��ռһ�У���һ��������ɡ�


Output
����ÿ���������ݣ����һ�С�����������ݲ���0~100��Χ�ڣ������һ�У���Score is error!����


Sample Input
56
67
100
123
*/
int main()
{

    int t;
    while(scanf("%d", &t) != EOF){
        if(t < 0 || t > 100){ //������Χ
            printf("Score is error!\n");
            continue;
        }
        int level = t / 10 ;

        switch(level){
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            default:
                printf("E\n");
        }
    }
    return 0;
}
