#include<iostream>
using namespace std;

int main() {
    string s;
    int lines = 0;
    while(getline(cin,s)) {
        lines++;
    }
    cout << lines << endl;
}
