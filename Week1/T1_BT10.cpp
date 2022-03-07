#include <iostream>

using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    int y = year - ((14 - month)/12);
    int x = y + y/4 - y/100 + y/400;
    int m = month + 12*((14 - month)/12) - 2;
    int dayweek = (day + x +31*m/12)%7;
    switch (dayweek) {
    case 0:
        cout << "sun";
        break;
    case 1:
        cout << "mon";
        break;
    case 2:
        cout << "tue";
        break;
    case 3:
        cout << "wed";
        break;
    case 4:
        cout << "thu";
        break;
    case 5:
        cout << "fri";
        break;
    case 6:
        cout << "sat";
        break;
    }
    return 0;
}
