class Solution {
    public int busyStudent(int[] st, int[] et, int qt)
    {
        int c = 0;
        if(st.length == 0)
        {
            return 0;
        }

        for(int i = 0; i< st.length; i++)
        {
            if(qt <= et[i] && st[i] <= qt)
            {
                c++;
            }
        }
        return c; 
    }
}