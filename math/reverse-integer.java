class Solution {
    public int reverse(long x)
    {
        
        long r = 0;

        while(x != 0)
        {
            r = ((r * 10) + (x%10));
            x /= 10;
        }

        if(Math.pow(-2,31) > r || Math.pow(2,31)-1 < r)
        {
            return 0;
        } 
        return (int)r;
    }
}