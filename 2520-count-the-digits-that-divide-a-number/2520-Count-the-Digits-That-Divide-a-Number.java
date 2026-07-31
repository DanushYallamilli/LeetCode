class Solution {
    public int countDigits(int num)
    {
        int cpy = num, i = 0,count = 0;
        while(num != 0)
        {
            i = num %10;
            if(cpy % i == 0)
            {
                count++;
            }
            num /= 10;
        }
        return count;
    }
}