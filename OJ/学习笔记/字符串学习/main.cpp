#include <iostream>

using namespace std;

int main() {
    string s0 = "吴汪胜最帅";
    cout << "s0: "<< s0 <<endl;

    string s1; ///空串
    cout << "s1: " << s1 <<endl;

    string s2(s0);
    cout << "s2: " << s2 <<endl;

    string s3(s0, 0, 3);
    cout << "s3: " << s3 << endl;

    string str = "4dsf65a45s阿斯加德分开";
    cout << "str 内容: "<< str << endl;
    cout << "str[7] 内容: "<< str[7] << endl;

    ///插入字符串
    string str2;
    str2.insert(0, str);
    cout << str2 << endl;

    ///插入到指定位置
    str2.insert(2, str);
    cout << str2 << endl;

    ///删除某字符
    str2.erase(1);
    cout << str2 << endl;

    ///删除某字符
    str2.erase(1, 2);
    cout << str2 << endl;

    str2.clear();
    cout << "执行 clear() 操作后的 str2: " << str2 << endl;

    ///运算
    string a = "ab";
    string b = "abc";
    string c = "bcc";

    cout << (a <= b) <<endl;
    cout << (a != b) <<endl;
    cout << (a < b) <<endl;

    string words = "Hello World!";

    ///获取字符串长度
    int len = words.length();
    cout << "words 字符串的长度: " << len << endl;

    int length = words.size();
    cout << "words 字符串的长度: " << length << endl;

    int postion = words.find("He");
    cout << "He 在 "<< words << " 中的位置是: " << postion << endl;

    ///从某一位置开始寻找
    int pos = words.find("World", 2);
    cout << "World 从位置 2 开始查找在 "<< words << " 中的位置是: " << pos << endl;

    ///子串操作
    string w_0 = words.substr(0);
    cout << w_0 << endl;

    string w_6_12 = words.substr(6, 12);
    cout << w_6_12 << endl;
    return 0;
}
