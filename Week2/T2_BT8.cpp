#include <iostream>

using namespace std;

int main()
{
    long long n;
    int dem=0;
    cin >> n;
    do {
        n /= 10;
        dem++;
    }while (n != 0);
    cout << dem;
    return 0;
}
