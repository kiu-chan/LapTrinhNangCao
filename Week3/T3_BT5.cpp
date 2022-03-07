#include <iostream>

using namespace std;

int main()
{
    int a[1000], n;
    bool check=true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n/2+1; i++)
    if (a[i] != a[n-i-1])
        check = false;
    if (check)
        cout << "Symmetric array.";
    else
        cout << "Asymmetric array.";
    return 0;
}
