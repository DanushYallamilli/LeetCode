int countPrimeSetBits(int left, int right)
{
    int w[right+1-left];
    int a = left;
    //assigning the given range to the list
    for(int i = 0; i<right+1-left;i++)
    {
        w[i] = a++;
    }
    //Display
    for(int i = 0; i<right+1-left; i++)
    {
        printf("%d ",w[i]);
    }
    int p[right+1-left];
    for(int i = 0; i<right+1-left; i++)
    {
        if(w[i] == 0) p[i] = 0;
        else
        {
            int count = 0;
            while(w[i] != 0)
            {
                if(w[i] % 2 == 1)
                {
                    count++;
                    p[i] = count;
                }
                w[i] /= 2;
            }
        }
    }
    int prime = 0;
    for(int i = 0; i<right+1-left; i++)
    {
        if(p[i] == 2 || p[i] == 3 || p[i] == 5 || p[i] == 7 || p[i] == 11 || p[i] == 13 || p[i] == 17 || p[i] == 19)
        {
            prime++;
        }
    }
    return prime;
}
