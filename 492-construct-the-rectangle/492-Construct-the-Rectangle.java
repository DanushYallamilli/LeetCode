class Solution {
    public int[] constructRectangle(int n)
    {
        
        int w = (int) Math.sqrt(n);
        while( n % w != 0)
        {
            w--;
        }

        return new int [] {n/w,w};
    }
}