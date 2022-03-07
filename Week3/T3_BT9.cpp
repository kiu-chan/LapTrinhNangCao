#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i=0;
    while (s[i] == ' ')
        i++;
    while (i < s.size())
    {
        while (s[i] == ' ' && s[i+1] == ' ')
        s.erase(i, 1);
        i++;
    }
    cout << s;
    return 0;
}
