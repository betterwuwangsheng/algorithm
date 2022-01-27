#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); ++i)
    s[i] = toupper(s[i]);
  cout << s << endl;
  return 0;
}


// #include <algorithm>
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//   string s;
//   cin >> s;
//   transform(s.begin(), s.end(), s.begin(), ::toupper);
//   cout << s;
//   return 0;
// }
