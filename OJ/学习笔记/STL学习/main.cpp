#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;
int main() {

    // vector -> 动态数组
    //vector() -> 构造一个空的 vector

    /**
        以下构造的为空动态数组
    */
    vector<int> vt1; //一维 int 型数组
    vector<int> vt2[N]; //vt2[0] - vt2[N - 1]
    vector<vector<int> > vt3; //二维动态数组

    /**
        以下定义动态数组并赋值
    */
    int n = 5;
    int val = 3;
    vector<int> vt4(n);
    vector<int> vt5(n, val);

    cout << vt4[2] << endl;
    cout << vt5[2] << endl;

    for(int i = 0; i < 5; i++) {
        cout << vt5[i] << ' ';
    }
    printf("\n");

    ///获得动态数组的长度
    int len = (int)vt5.size();
    printf("%d\n",len);

    for(int i = 0; i < (int)vt5.size(); i++) {
        printf("%d ", vt5[i]);
    }

    printf("\n");

    ///通过迭代器访问
    vector<int>::iterator it;
    cout <<(*vt5.begin());
    printf("\n");

    ///通过迭代器遍历
    for(it = vt5.begin(); it != vt5.end(); it++) {
        cout << (*it) << ' ';
    }
    printf("\n");

    ///删除最后一个元素
    vt5.pop_back();

    ///向动态数组中添加一个元素
    vt5.push_back(1);

    ///插入元素（指定位置）
    vt5.insert(vt5.begin(),5);
    for(it = vt5.begin(); it != vt5.end(); it++) {
        cout << (*it) << ' ';
    }
    cout << endl;
    ///string 字符串类型
    string str1 = "wws";
    string str2 = "最帅";

    cout << str1 + str2 << endl;
    cout << str1.size();
    return 0;
}
