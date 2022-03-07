#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    int num = sqrt(lowerBound);
    if (num*num < lowerBound)
        num++;
    for (int i = num; i*i <= upperBound; i++)
        cout << i*i << " ";
    return 0;
}
