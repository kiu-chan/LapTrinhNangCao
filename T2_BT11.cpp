#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);

	double mean = 0, varx = 0;
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> nums[i];
		mean += nums[i] * 1.0 / n;
	}

	for (size_t i = 0; i < n; i++)
	{
		varx += (nums[i] - mean) * (nums[i] - mean);
	}

	cout << fixed << setprecision(2) << varx / n;
	
	return 0;
}
