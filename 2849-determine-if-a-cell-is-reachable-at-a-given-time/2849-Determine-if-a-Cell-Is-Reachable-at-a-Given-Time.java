class Solution {
    public boolean isReachableAtTime(int sx, int sy, int fx, int fy, int t)
    {
        
        int chebshev_dist = Math.max(Math.abs(sx-fx),Math.abs(sy-fy));

        if(sx == fx && sy == fy && t == 1)
        {
            return false;
        }        
        return (chebshev_dist <= t);
    }
}