#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    int j = 0;
    for (int i = 0; i < n-1; i++)
        if (s[j] == s[j+1])
            s.erase(s.begin()+j, s.begin()+j+1);
        else
            j++;
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    return 0;
}
