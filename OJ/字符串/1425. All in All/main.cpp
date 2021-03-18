#include <iostream>
#include<string>
using namespace std;

int main() {
    string s,t;
    while(cin>>s>>t) {
        int j=0;
        for(int i = 0; i < t.length(); i++) {
            if(t[i] == s[j])
                j++;

            //相同字符数量 == s 的长度
            if(j == s.length())
                break;
        }
        if(j == s.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
