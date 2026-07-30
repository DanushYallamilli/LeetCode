int countPrimes(int n)
{
    int count = 0;
    if(n == 0 || n == 1) return 0;
    else
    {
        int P[n+1];
        for(int i=2; i<=n;i++)
        {
            P[i] = 1;
        }
        for(int i=2; i*i<n;i++)
        {
            if(P[i] != 0)
            {
                for(int j = i*i; j<n; j+=i)
                {
                    P[j] = 0;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(P[i] == 1) count++;
        }
    }
    return count;
}