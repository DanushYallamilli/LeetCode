int reverse(int x)
{
    int temp=0;
    int sum=0;
    while(x!=0)
    {

        temp = x%10;
        if (sum > INT_MAX/10 || sum < INT_MIN/10) 
        {
        return 0;
        }
        sum = sum * 10 + temp;
        x = x/10;
    }
    return sum;
}