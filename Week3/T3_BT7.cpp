#include <iostream>

using namespace std;

int main()
{
    string s;
    int a = 0, b = 0, c = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            a++;
        else
        {
            if (s[i] <= '9' && s[i] >= '0')
                b++;
            else
                c++;
        }
    cout << a << " " << b << " " << c;
    return 0;
}
