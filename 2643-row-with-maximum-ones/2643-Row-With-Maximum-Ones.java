class Solution {
    public int[] rowAndMaximumOnes(int[][] mat)
    {
        int [] arr = {0,0};
        int c = 0, m = 0, ind = 0;
        for( int i = 0; i< mat.length; i++)
        {
            c = 0;
            for( int j = 0; j< mat[0].length; j++)
            {
                c += mat[i][j];
            }
            if(c > m)
            {
                m = c;
                ind = i;
            }

        }
        return new int [] {ind, m};
    }
}