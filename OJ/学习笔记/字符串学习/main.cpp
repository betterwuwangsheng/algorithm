#include <iostream>

using namespace std;

int main() {
    string s0 = "����ʤ��˧";
    cout << "s0: "<< s0 <<endl;

    string s1; ///�մ�
    cout << "s1: " << s1 <<endl;

    string s2(s0);
    cout << "s2: " << s2 <<endl;

    string s3(s0, 0, 3);
    cout << "s3: " << s3 << endl;

    string str = "4dsf65a45s��˹�ӵ·ֿ�";
    cout << "str ����: "<< str << endl;
    cout << "str[7] ����: "<< str[7] << endl;

    ///�����ַ���
    string str2;
    str2.insert(0, str);
    cout << str2 << endl;

    ///���뵽ָ��λ��
    str2.insert(2, str);
    cout << str2 << endl;

    ///ɾ��ĳ�ַ�
    str2.erase(1);
    cout << str2 << endl;

    ///ɾ��ĳ�ַ�
    str2.erase(1, 2);
    cout << str2 << endl;

    str2.clear();
    cout << "ִ�� clear() ������� str2: " << str2 << endl;

    ///����
    string a = "ab";
    string b = "abc";
    string c = "bcc";

    cout << (a <= b) <<endl;
    cout << (a != b) <<endl;
    cout << (a < b) <<endl;

    string words = "Hello World!";

    ///��ȡ�ַ�������
    int len = words.length();
    cout << "words �ַ����ĳ���: " << len << endl;

    int length = words.size();
    cout << "words �ַ����ĳ���: " << length << endl;

    int postion = words.find("He");
    cout << "He �� "<< words << " �е�λ����: " << postion << endl;

    ///��ĳһλ�ÿ�ʼѰ��
    int pos = words.find("World", 2);
    cout << "World ��λ�� 2 ��ʼ������ "<< words << " �е�λ����: " << pos << endl;

    ///�Ӵ�����
    string w_0 = words.substr(0);
    cout << w_0 << endl;

    string w_6_12 = words.substr(6, 12);
    cout << w_6_12 << endl;
    return 0;
}
