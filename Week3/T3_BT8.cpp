#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s.find("Zues") != -1)
        swap(s[s.find("Zues")+1], s[s.find("Zues")+2]);
    cout << s;
    return 0;
}
