int product(int m, int n)
{
    int sum = 1;
    for (int i = m; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}