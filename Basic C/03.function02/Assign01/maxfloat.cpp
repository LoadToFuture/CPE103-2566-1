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