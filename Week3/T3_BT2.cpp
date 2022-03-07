#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    double a[1000];
    cin >> n;
    for (int i = 0;i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<double>());
    for (int i = 0;i < n; i++)
        cout << fixed << setprecision(2)  << a[i] << " ";
    return 0;
}
