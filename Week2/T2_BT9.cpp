#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x[1000];
    int n;
    cin >> n;
    for (int i = 0;i < n; i++)
        cin >> x[i];
    for (int i = n - 1; i >= 0; i--)
        cout << fixed << setprecision(2) << x[i] << " ";
    return 0;
}
