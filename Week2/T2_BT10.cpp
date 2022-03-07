#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	double product = 0;
	vector<double> a(n), b(n);
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		product += a[i] * b[i];
	}
	
	cout << fixed << setprecision(2) << product;
	return 0;
}
