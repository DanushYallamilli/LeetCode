// First attempt
int countPrimeSetBits(int left, int right)
{
    int prime_count = 0;
    
    for(int i = left; i <= right; i++)
    {
        int count = 0;
        int n = i;
        
        while(n != 0)
        {
            if(n % 2 == 1)
            {
                count++;
            }
            n /= 2;
        }

        if(count == 2 || count == 3 || count == 5 || count == 7 || 
           count == 11 || count == 13 || count == 17 || count == 19 || 
           count == 23 || count == 29 || count == 31)
        {
            prime_count++;
        }
    }
    
    return prime_count;
}

// Optimised Code
int countPrimeSetBits(int left, int right)
{
    int prime_count = 0;
    
    for(int i = left; i <= right; i++)
    {
        int count = 0;
        int temp = i; 
        while(temp != 0) 
        {
            if((temp & 1) == 1)
            {
                count++;
            }
            temp = temp >> 1;
        }
        if(count == 2 || count == 3 || count == 5 || count == 7 || 
           count == 11 || count == 13 || count == 17 || count == 19 || 
           count == 23 || count == 29 || count == 31)
        {
            prime_count++;
        }
    }
    
    return prime_count;
}
