#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a, b;
    int n, x;
    cin >> n;
    for (int i = 0;i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0;i < n; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    if (a == b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
