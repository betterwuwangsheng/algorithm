#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//定义磁道范围(0 ~99)
#define MAX 100

//定义要访问的磁道总数
#define N 2

//存储随机产生的请求访问的磁道序列
int track_sequence[MAX];

//标记磁道是否已经被访问的数组
int visit[MAX];

//定义初始磁头位置
int initial_pos;
int closedistant;  //保存其他磁道与当前磁头所在磁道的最短距离

//交换函数
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

//快速排序(相对更快)
void quick_sort(int a[], int l, int r) {
    //数组为空或者只有一个数
    if (l >= r)
        return;

    //分界点,枢轴元素(中间位置元素)
    int pivot = a[l + r >> 1];

    //两侧指针(数组两边界之外, i j 同时往中间移动)
    int i = l - 1, j = r + 1;

    //不断循环
    while (i < j) {
        //左右指针向中间移动
        do {
            i++;
        } while (a[i] < pivot);  //遇到第一个大于 pivot的值
        do {
            j--;
        } while (a[j] > pivot);  //遇到第一个小于 pivot的值

        //没有相遇
        if (i < j)
            //交换a[i], a[j]
            swap(a[i], a[j]);
    }
    //递归处理左右两端
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

//冒泡排序
// void bubble_sort() {
//     for (int i = 0; i < N - 1; i++) {
//         for (int j = i + 1; j < N; j++) {
//             if (track_sequence[j] < track_sequence[i]) {
//                 swap(track_sequence[i], track_sequence[j]);
//             }
//         }
//     }
// }

//菜单显示
void init_menu(){
    printf("****************************** 主菜单 ****************************\n");
    printf("|                                                                |\n");
    printf("|		          1. SSTF(最短寻道优先算法)              |\n");
    printf("|		          2. CSCAN(循环扫描算法)                 |\n");
    printf("|		          3. SCAN(扫描算法)                      |\n");
    printf("|		          4. 重新产生一组新的序列                |\n");
    printf("|		          5. 结束                                |\n");
    printf("|                                                                |\n");
    printf("******************************************************************\n");
    printf("请输入序号进行选择：");
}

//随机产生磁头初始位置和访问序列
void create_sequence() {
    initial_pos = rand() % MAX;  //随机产生初始磁头位置
    printf("\n当前磁头位置：%d\n", initial_pos);
    printf("请求访问的磁道号序列：");
    for (int i = 0; i < N; i++) {  //随机产生请求磁道号序列
        track_sequence[i] = rand() % MAX;
        printf("%d ", track_sequence[i]);
    }
    printf("\n");
}

//最短寻道优先算法
void SSTF() {
    int i,j;

    //记录最近磁道号
    int nearest_track_pos;  
    
    //记录当前磁头位置
    int current_head_pos;

    //记录磁头移动的次数
    int num_of_moves = 0;

    //记录最短距离
    int shortest_distance;

    //记录磁头访问顺序  
    int head_access_sequence[MAX];

    //初始化访问数组
    memset(visit, 0, sizeof(visit));

    //更新当前磁头位置为初始磁头位置
    current_head_pos = initial_pos;

    for (i = 0; i < N; i++) { //18 20 1 

        //每一次遍历都将最短距离设置为 MAX
        shortest_distance = MAX;

        //有最近磁道则更新
        for (j = 0; j < N; j++) {  

            //未访问过
            if (!visit[j]) {

                //计算当前磁头和请求访问的磁道之间的距离(小于最短距离 -> 更新最短距离,否则 -> 不操作)
                if (fabs(current_head_pos - track_sequence[j]) < shortest_distance) {

                    //更新最短距离
                    shortest_distance = fabs(current_head_pos - track_sequence[j]);

                    //更新最近磁道号
                    nearest_track_pos = j;
                }
            }
        }

        //更新磁头移动的距离
        num_of_moves += shortest_distance;        

        //更新当前磁头所在位置
        current_head_pos = track_sequence[nearest_track_pos];      

        //将该磁头位置标记为已访问
        visit[nearest_track_pos] = 1; 

        //更新磁头访问顺序            
        head_access_sequence[i] = track_sequence[nearest_track_pos];  
    }

    //输出磁道访问序列
    printf("使用 SSTF (最短寻道算法) 算法的寻道序列为：");
    for (i = 0; i < N - 1; i++) {
        printf("%d -> ", head_access_sequence[i]);
    }
    printf("%d\n", head_access_sequence[i]);

    //输出结果(访问总次磁道数和平均寻道长度)
    printf("使用 SSTF (最短寻道算法) 算法时，磁头运行的总磁道数为：%d\n", num_of_moves);
    printf("使用 SSTF (最短寻道算法) 算法时，平均寻道长度为：%.2lf\n", 1.0 * num_of_moves  / N);
    printf("******************    本次寻道算法运行结束!    ******************\n");
     printf("请输入序号进行选择：");
}



//扫描算法，电梯算法
void SCAN() {
    int i,j;

    
    //记录当前磁头位置
    int current_head_pos;

    //记录磁头移动的次数
    int num_of_moves = 0;

    //记录磁头访问顺序  
    int head_access_sequence[MAX];

    //更新当前磁头位置为初始磁头位置
    current_head_pos = initial_pos;

    for (i = 0; i < N; i++) {  //找到当前磁头所在位置
        if (track_sequence[i] >= current_head_pos) {
            break;
        }
    }
    j = i - 1;
   
     //记录索引
    int index = 0;  

    //自里向外访问
    while (i < N) {           

        //更新移动的距离                         
        num_of_moves +=  fabs(track_sequence[i] - current_head_pos);  

        //更新当前磁头位置
        current_head_pos = track_sequence[i]; 

 //记录磁头访问顺序
        head_access_sequence[index++] = track_sequence[i]; 

        //右移(移动到下一个请求访问的磁道上方)
        i++;
    }

     //自外向里访问 
    while (j >= 0) {

        //更新移动的距离    
        num_of_moves += fabs(track_sequence[j] - current_head_pos); 
        
        //更新当前磁头位置
        current_head_pos = track_sequence[j];   

        //记录磁道访问顺序     
        head_access_sequence[index++] = track_sequence[j];  

        //右移(移动到下一个请求访问的磁道上方)
        j--;
    }

    printf("**********************************************************************\n");
    printf("注意：这里的 SCAN 算法规定磁头初始方向为自低磁道向高磁道(数组索引 0 -> MAX)\n");
    printf("使用 SCAN 算法的寻道序列为：");
    for (i = 0; i < N - 1; i++) {
        printf("%d -> ", head_access_sequence[i]);
    }
    printf("%d\n", head_access_sequence[i]);
    printf("使用 SCAN 算法时，磁头运行的总磁道数为：%d\n", num_of_moves);
    printf("使用 SCAN 算法时，平均寻道长度为：%.2lf\n",  1.0 *num_of_moves  / N);
    printf("******************    本次寻道算法运行结束!    ******************\n");
    printf("请输入序号进行选择：");
}

//循环扫描算法
void CSCAN() {
    int i,j;
    int num_of_moves = 0;
    int current_head_pos;
    int head_access_sequence[MAX];
    current_head_pos = initial_pos;
    for (i = 0; i < N; i++) {  //找到磁头在序列中的位置
        if (track_sequence[i] >= current_head_pos) {
            break;
        }
    }
    for (j = 0; j < N; i++, j++) {
        if (i == N) {  //形成头尾相连
            i = 0;
        }
        num_of_moves = num_of_moves + fabs(track_sequence[i] - current_head_pos);  //记录移动的距离
        current_head_pos = track_sequence[i];      //记录当前磁头所在位置
        head_access_sequence[j] = track_sequence[i];  //记录路径
    }
    printf("注意: 这里的 CSCAN 算法规定磁头自里向外移动\n");
    printf("使用 CSCAN 算法的寻道序列为：");
    for (i = 0; i < N - 1; i++) {
        printf("%d -> ", head_access_sequence[i]);
    }
    printf("%d\n", head_access_sequence[i]);
    printf("使用 CSCAN 算法时，磁头运行的总磁道数为：%d\n", num_of_moves);
    printf("使用 CSCAN 算法时，平均寻道长度为：%.2lf\n", num_of_moves * 1.0 / N);
    printf("******************    本次寻道算法运行结束!    ******************\n");
    printf("请输入序号进行选择：");
}


void Start() {
    // bubble_sort();
    // for (int i = 0; i < N; ++i) {
    //    printf("%d ", track_sequence[i]);
    //}
    //quick_sort(track_sequence, 0, N);
    
    //快速排序
    quick_sort(track_sequence,0, N - 1);

    //初始化菜单
    init_menu();

    //获取输入
    char input;
    while (input = getchar()) {

        //寻道算法选择
        switch (input) {
            case '1':
                SSTF();//1 -> SSTF
                break;
            case '2':
                CSCAN();//2 -> CSCAN
                break;
            case '3':
                SCAN();//3 -> SCAN
                break;
            case '4':
                //产生随机数序列
                create_sequence();

                //快速排序
                  quick_sort(track_sequence,0, N - 1);
                  init_menu();
                break;
                case '5':
                 printf("您已经退出程序,感谢使用!\n");
                 exit(0);
                 break;
            default:
           
                break;
        }
    }
}

int main() {

    //随机种子
    srand((unsigned)time(NULL));

    //随机产生磁头初始位置和访问序列
    create_sequence();


    Start();
    return 0;
}