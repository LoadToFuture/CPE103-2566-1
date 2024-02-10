int summation(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int product(int m, int n)
{
    int sum = 1;
    for (int i = m; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
float Poly2(float a2, float a1, float a0, float x)
{
   
    return (a2 * (x * x)) + (a1 * x) + a0;
}
float maxFloat(float data[], int n)
{
    float maxValue = data[0];
    for (int i = 1; i < n; i++)
    {
        if (data[i] > maxValue)
            maxValue = data[i];
    }
    return maxValue;
}