bool isPrime (int number)
{
    if (number <= 1)
    return false;
    if (number == 2 || number == 3)
        return true;
    for (int i = 2; i <= sqrt(number); i++)
        if (number%i == 0)
            return false;
    return true;
}