int hammingWeight(int n)
{
    int count = 0;
    if(n == 0) return 0;
        else
        {
            while(n != 0)
            {
                if(n % 2 == 1)
                {
                    count++;
                }
                n /= 2;
            }
        }
    return count;
}