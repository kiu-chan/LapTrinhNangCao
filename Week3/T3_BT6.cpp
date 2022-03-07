#include <iostream>

using namespace std;

int main()
{
    string s;
    int dem = 0;
    getline(cin, s);
    s = " " + s;
    for (int i = 0; i < s.size()-1; i++)
        if (s[i] == ' ' && s[i+1] != ' ')
        dem++;
    cout << dem;
    return 0;
}
