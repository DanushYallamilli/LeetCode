class Solution {
    public int sumBase(int n, int k) {
        int r = 0;

        while (n!= 0)
        {
            r = (r*10) + (n%k);
            n /= k;
        }

        while(r!= 0)
        {
            n += r%10;
            r /= 10;
        }

        return n;
    }
}