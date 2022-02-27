#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    for (int i=1; i< a; i++)
    {
        if (i*2 + (a-i)*4 == b)
        {
            cout << "chicken = "<< i << ", " << "dog = " << a-i;
            return 0;
        }
    }
    cout << "invalid";
}