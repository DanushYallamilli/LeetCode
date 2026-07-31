class Solution {
    public boolean validMountainArray(int[] a)
    {
       if(a.length < 3)
       {
            return false;
       }
        int i = 0;
       while (i +1< a.length && a[i]< a[i+1])
       {
            i++;
       }

        if(i == 0 || i == a.length -1)
       {
            return false;
       }
       
       while(i< a.length-1 && a[i]> a[i+1])
       {
            i++;
       }

       

       if(i == a.length-1)
       {
            return true;
       }
       return false;
    }
}