#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool check = true;
    if (s.size() <= 15 && s.size() >= 6 && !(s[0] <= '9' && s[0] >= '0'))
    {
    for (int i=0; i < s.size(); i++)
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' && s[i] <= 'Z') || (s[i] <= '9' && s[i] >= '0')))
            check = false;
    }
    else
        check = false;
    if (check)
        cout << "Valid username.";
    else
        cout << "Invalid username.";
    return 0;
}
