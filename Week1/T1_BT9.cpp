#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a,b,c,p;
    cin >> a >> b >> c;
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        p=(a+b+c)/2;
        cout << setprecision(2) << fixed << sqrt(p*(p-a)*(p-b)*(p-c));
    }
    else
        cout << "invalid";
    return 0;
}
