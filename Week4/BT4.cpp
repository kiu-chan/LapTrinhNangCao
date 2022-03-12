long long int factorial(int n)
{
    long long a = 1;
    for (int i = 2; i <= n; i++)
        a *= i;
    return a;
}